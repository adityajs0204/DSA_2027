#include <bits/stdc++.h>
using namespace std;
bool hasSameDigits(string s) {
        while(s.size()>2){
            string new_s="";
            for(int i=0;i<s.size()-1;i++){
                int r=(int(s[i]+s[i+1]))%10;
                new_s.push_back(r);
            }
            s=new_s;
        }
        if(s[0]==s[1]) return 1;
        else return 0;
    }

int main() {
    string s;
    cout << "Enter a numeric string: ";
    cin >> s;

    if (hasSameDigits(s))
        cout << "Yes, it has the same last two digits after reduction." << endl;
    else
        cout << "No, it does not have the same last two digits after reduction." << endl;

    return 0;
}