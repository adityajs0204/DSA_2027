#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s) {
    int i = s.size() - 1, len = 0;
    while (i >= 0 && s[i] == ' ') i--;
    while (i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }
    return len;
}
int main() {
    string s;
    getline(cin, s); 
    cout << "Length of last word: " << lengthOfLastWord(s) << endl;
    return 0;
}