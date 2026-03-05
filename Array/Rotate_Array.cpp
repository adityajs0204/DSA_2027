#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int>temp(n,0);
    for(int i=0;i<n;i++){
        temp[i]=nums[i];
    }
    for(int i=0;i<n;i++){
        nums[(i+k)%n]=temp[i];
    }
}
int main() {
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    rotate(nums,k);
    cout<<"Rotated array: ";
    for(int num: nums)
        cout<<num<<" ";
    return 0;
}