#include <bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle) {
    int m = haystack.size(), n = needle.size();
    for (int i = 0; i <= m - n; i++) {
        if (haystack.substr(i, needle.size()) == needle)
            return i;
    }
    return -1;
}
int main() {
    string haystack, needle;
    cin >> haystack;
    cin >> needle;
    int result = strStr(haystack, needle);
    if (result != -1)
        cout << "Substring found at index: " << result << endl;
    else
        cout << "Substring not found" << endl;

    return 0;
}