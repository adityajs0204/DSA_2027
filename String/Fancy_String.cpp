#include <bits/stdc++.h>
using namespace std;
string makeFancyString(string s) {
    string res;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[i+1] && s[i] == s[i+2]) continue;
        res.push_back(s[i]);
    }
    return res;
}
int main() {
    string s;
    cin >> s;
    string result = makeFancyString(s);
    cout << "Fancy string: " << result << endl;

    return 0;
}