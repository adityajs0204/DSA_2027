#!/usr/bin/env python3
"""
Auto-updates README.md with live stats from the repo's .cpp file counts.
Triggered by GitHub Actions on every push.
"""

import os
import re
from pathlib import Path
from datetime import datetime, timezone

# ── Config ────────────────────────────────────────────────────────────────────
REPO_ROOT = Path(__file__).resolve().parents[2]
README_PATH = REPO_ROOT / "README.md"

# Map folder name → display info (emoji, label, "max" for progress bar)
TOPICS = {
    "Array":                {"emoji": "📦", "label": "Array",              "max": 50},
    "String":               {"emoji": "🔤", "label": "String",             "max": 40},
    "Math":                 {"emoji": "🧮", "label": "Math",               "max": 30},
    "Dynamic Programming":  {"emoji": "🧠", "label": "Dynamic Programming","max": 40},
    "Tree":                 {"emoji": "🌲", "label": "Tree",               "max": 40},
    "Linked List":          {"emoji": "🔗", "label": "Linked List",        "max": 30},
    "Hash_Map":             {"emoji": "🗃️", "label": "Hash Map",           "max": 25},
    "Greedy":               {"emoji": "🤑", "label": "Greedy",             "max": 25},
    "Bit_Manipulation":     {"emoji": "⚙️", "label": "Bit Manipulation",   "max": 20},
}

# ── Helpers ───────────────────────────────────────────────────────────────────

def count_cpp(folder: Path) -> int:
    """Count .cpp files (not executables / binaries) in a folder."""
    if not folder.exists():
        return 0
    return sum(1 for f in folder.iterdir() if f.suffix == ".cpp")


def progress_bar(solved: int, max_val: int, width: int = 20) -> str:
    """Return an ASCII + emoji progress bar."""
    pct = min(solved / max_val, 1.0)
    filled = round(pct * width)
    bar = "█" * filled + "░" * (width - filled)
    return f"`{bar}` {solved}/{max_val}"


def build_topic_table(stats: dict) -> str:
    rows = ["| # | Topic | Solved | Progress |",
            "|---|-------|:------:|----------|"]
    for i, (folder, info) in enumerate(TOPICS.items(), 1):
        solved = stats[folder]
        emoji  = info["emoji"]
        label  = info["label"]
        bar    = progress_bar(solved, info["max"])
        status = "🟢 Active" if solved > 0 else "⬜ Not Started"
        rows.append(f"| {i} | {emoji} **{label}** | {solved} | {bar} |")
    return "\n".join(rows)


def build_progress_section(stats: dict) -> str:
    lines = []
    label_width = max(len(TOPICS[f]["label"]) for f in TOPICS) + 2
    for folder, info in TOPICS.items():
        solved = stats[folder]
        pct    = min(solved / info["max"], 1.0)
        filled = round(pct * 20)
        bar    = "█" * filled + "░" * (20 - filled)
        label  = info["label"].ljust(label_width)
        lines.append(f"{label} {bar}  {solved}/{info['max']}")
    return "```\n" + "\n".join(lines) + "\n```"


def build_last_updated() -> str:
    now = datetime.now(timezone.utc).strftime("%B %d, %Y at %H:%M UTC")
    return f"*🤖 Last auto-updated: **{now}***"


# ── Section replacement helper ────────────────────────────────────────────────

def replace_between(text: str, start_marker: str, end_marker: str, new_content: str) -> str:
    """Replace everything between start_marker and end_marker (inclusive)."""
    pattern = re.compile(
        re.escape(start_marker) + r".*?" + re.escape(end_marker),
        re.DOTALL
    )
    replacement = f"{start_marker}\n{new_content}\n{end_marker}"
    result, count = pattern.subn(replacement, text)
    if count == 0:
        raise ValueError(f"Could not find markers:\n  START: {start_marker}\n  END:   {end_marker}")
    return result


# ── Main ──────────────────────────────────────────────────────────────────────

def main():
    print(f"📂 Repo root : {REPO_ROOT}")
    print(f"📄 README    : {README_PATH}\n")

    # Count problems per topic
    stats = {folder: count_cpp(REPO_ROOT / folder) for folder in TOPICS}
    total = sum(stats.values())

    for folder, count in stats.items():
        print(f"  {TOPICS[folder]['label']:25s}: {count} problems")
    print(f"\n  {'TOTAL':25s}: {total} problems\n")

    # Read README
    readme = README_PATH.read_text(encoding="utf-8")

    # 1. Topic table
    readme = replace_between(
        readme,
        "<!-- TOPICS_TABLE_START -->",
        "<!-- TOPICS_TABLE_END -->",
        build_topic_table(stats)
    )

    # 2. Progress bars
    readme = replace_between(
        readme,
        "<!-- PROGRESS_START -->",
        "<!-- PROGRESS_END -->",
        build_progress_section(stats)
    )

    # 3. Total count badge
    readme = replace_between(
        readme,
        "<!-- TOTAL_START -->",
        "<!-- TOTAL_END -->",
        f"**🧩 Total Problems Solved: {total}**"
    )

    # 4. Last updated timestamp
    readme = replace_between(
        readme,
        "<!-- UPDATED_START -->",
        "<!-- UPDATED_END -->",
        build_last_updated()
    )

    README_PATH.write_text(readme, encoding="utf-8")
    print("✅ README.md updated successfully!")


if __name__ == "__main__":
    main()
