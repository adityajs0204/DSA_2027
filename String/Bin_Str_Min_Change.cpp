#include <bits/stdc++.h>
using namespace std;
int minOperations(string s) {
    int n=s.size(),ans=0;
    for(int i=0;i<n;i+=2){
        if(i==n-1 and n%2!=0){
            if(s[i]==s[i-1]) ans++;
        }
        else if(s[i]==s[i+1]) ans++;
    }
    return ans;
}
int main() {
    string s="0100";
    int result=minOperations(s);
    cout<<"Binary string: "<<s<< endl;
    cout<<"Minimum operations needed: "<<result<< endl;

}
