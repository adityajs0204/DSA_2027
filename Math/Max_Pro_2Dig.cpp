#include <bits/stdc++.h>
using namespace std;
int maxProduct(int n) {
    vector<int>nums;
    int max1=-1,max2=-1;
    while(n>0){
        int r=n%10;
        if(r>max2){
            if(r>max1){
                max2=max1;
                max1=r;
            }
            else max2=r;
        }
        n/=10;
    }
    return max1*max2;
}
int main() {
    cout<<maxProduct(5678)<<endl;
    return 0;
}