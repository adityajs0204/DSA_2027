#include <bits/stdc++.h>
using namespace std;
int maxSubarraySumCircular(vector<int>& nums) {
    int curr_max=0,curr_min=0,maxi=nums[0],mini=nums[0], val=0;
    for(int i=0;i<nums.size();i++){
        val+=nums[i];
        curr_max+=nums[i];
        curr_min+=nums[i];
        maxi=max(maxi,curr_max);
        mini=min(mini,curr_min);
        if(curr_max<0) curr_max=0;
        if(curr_min>0) curr_min=0;
    }
    if(maxi<0) return maxi;
    return max(val-mini,maxi);
}
int main() {
    vector<int> nums = {1, -2, 3, -2};
    int result = maxSubarraySumCircular(nums);
    cout << "Maximum Circular Subarray Sum: " << result << endl;
    return 0;
}