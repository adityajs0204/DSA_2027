#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
        mp[t[i]]--;
    }
    for (auto &i : mp) {
        if (i.second != 0) return false;
    }
    return true;
}
int main() {
    string s = "listen";
    string t = "silent";
    if (isAnagram(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}