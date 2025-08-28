#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    int l = 0, r = str.size()-1;
    while(l < r){
        if(str[l] != str[r]) return false;
        l++; r--;
    }
    return true;
}
bool isStrictlyPalindromic(int n) {
    for(int i=2; i<=n-2; i++){
        int num = n;
        string converted = "";
        while(num > 0){
            int r = num % i;
            converted += char('0' + r);
            num /= i;
        }
        reverse(converted.begin(), converted.end());
        if(!isPalindrome(converted)) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    if(isStrictlyPalindromic(n))
        cout << n << " is strictly palindromic" << endl;
    else
        cout << n << " is NOT strictly palindromic" << endl;

    return 0;
}