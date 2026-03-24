#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    if(s.size()<=1) return 0;
    stack<int>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='{' or s[i]=='[' or s[i]=='(') st.push(s[i]);
        else{
            if(st.empty()) return 0;
            else if(s[i]==')' and st.top()=='(') st.pop(); 
            else if(s[i]=='}' and st.top()=='{') st.pop();
            else if(s[i]==']' and st.top()=='[') st.pop();
            else return 0;
        }
    }
    return st.empty();
}
int main() {
    string s;
    cout<<"Enter a string of parentheses: ";
    cin>>s;
    bool result=isValid(s);
    cout<<"Is the string valid? " <<(result ? "Yes" : "No")<<endl;
    return 0;
}