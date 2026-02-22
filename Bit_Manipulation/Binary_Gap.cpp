#include<bits/stdc++.h>
using namespace std;
int binaryGap(int n) {
    string bin="";
    if(n==0) bin="0";
    else{
    while(n>0){
        int r=n%2;
        bin=char(r+'0')+bin;
        n/=2;
    }
    } 
    int ans=0,l=-1,r;
    for(int i=0;i<bin.size();i++){
    if(bin[i]=='1'){
        if(l!=-1) ans=max(ans,i-l);
        l=i;
    } 
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int result=binaryGap(n);
    cout<<"Binary Gap: "<<result<<endl;
    return 0;
}