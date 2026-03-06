#include <bits/stdc++.h>
using namespace std;
bool checkOnesSegment(string s) {
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='0' and s[i+1]=='1') return false;
    }
    return true;
}
int main() {
    string s = "1100011";
    cout << "String: " << s << endl;
    bool result = checkOnesSegment(s);
    cout << "Is there at most one segment of ones? " << (result ? "Yes" : "No") << endl;
    return 0;
}