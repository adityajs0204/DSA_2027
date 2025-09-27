#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);
    }
    vector<vector<string>> res;
    for (auto &i : mp) {
        res.push_back(i.second);
    }
    return res;
}

int main() {
    // Example input
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    // Call function
    vector<vector<string>> result = groupAnagrams(strs);

    // Print output
    cout << "[\n";
    for (auto &group : result) {
        cout << "  [ ";
        for (auto &word : group) {
            cout << "\"" << word << "\" ";
        }
        cout << "]\n";
    }
    cout << "]" << endl;

    return 0;
}