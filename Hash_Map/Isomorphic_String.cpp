#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t) {
    unordered_map<char,char>mp1,mp2;
    for(int i=0;i<s.size();i++){
        if(mp1.find(s[i]) == mp1.end()) mp1[s[i]]=t[i];
        else if(t[i]!=mp1[s[i]]) return 0;
        if(mp2.find(t[i])==mp2.end()) mp2[t[i]]=s[i];
        else if(s[i]!=mp2[t[i]]) return 0;
    }
    return 1;
}
int main() {
    string s,t;
    cout<<"Enter first string: ";
    cin>>s;
    cout<<"Enter second string: ";
    cin>>t;
    bool result=isIsomorphic(s,t);
    cout<<"Isomorphic Strings: " <<(result ? "Yes" : "No")<<endl;
    return 0;
}