#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& nums) {
    int maxi=nums[0],curr=1;
    for(int n:nums){
        curr*=n;
        maxi=max(maxi,curr);
        if(curr==0) curr=1;
    }
    curr=1;
    for(int i=nums.size()-1;i>=0;i--){
        curr*=nums[i];
        maxi=max(maxi,curr);
        if(curr==0) curr=1;
    }
    return maxi;
}
int main() {
    vector<int> nums = {2, 3, 5, -2, 7, -4};
    int result = maxProduct(nums);
    cout << "Maximum Product Subarray: " << result << endl;
    return 0;
}