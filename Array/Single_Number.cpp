#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    for(int i=0;i<n-1;i+=2){
        if(nums[i]!=nums[i+1]) return nums[i];
    }
    return nums[n-1];
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single number: " << singleNumber(nums) << endl;
    return 0;
}