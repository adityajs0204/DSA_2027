#include <bits/stdc++.h>
using namespace std;
int bitwiseComplement(int n) {
    if(n==0) return 1;
    string bin="";
    while(n>0){
        int r=n%2;
        bin+=(r+'0');
        n/=2;
    }
    for(int i=0;i<bin.size();i++){
        if(bin[i]=='0') bin[i]='1';
        else bin[i]='0';
    }
    int val=0;
    for(int i=bin.size()-1;i>=0;i--){
        val+=((bin[i]-'0')*pow(2,i));
    }
    return val;
}
int main() {
    int n=5;
    int complement=bitwiseComplement(n);
    cout<<"Bitwise complement of "<<n<<" is: "<<complement<<endl;
    return 0;
}