#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) {
    int r=0,w=0,b=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) r++;
        else if(nums[i]==1) w++;
        else b++;
    }
    for(int i=0;i<nums.size();i++){
        if(r){
            nums[i]=0;
            r--;
        }
        else if(w){
            nums[i]=1;
            w--;
        }
        else{
            nums[i]=2;
            b--;
        }
    }
}
int main() {
    vector<int>nums={2, 0, 2, 1, 1, 0};
    sortColors(nums);
    cout<<"Sorted colors: ";
    for(int num:nums) {
        cout<<num<< " ";
    }
    return 0;
}