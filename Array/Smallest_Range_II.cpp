#include <bits/stdc++.h>
using namespace std;
int smallestRangeII(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int n=nums.size(),mini,maxi;
    int ans=nums[n-1]-nums[0];
    for(int i=1;i<n;i++){
        mini=min(nums[0]+k,nums[i]-k);
        maxi=max(nums[i-1]+k,nums[n-1]-k);
        ans=min(ans,maxi-mini);
    }
    return ans;
}
int main() {
    vector<int>nums={1,3,6};
    int k=3;
    int result=smallestRangeII(nums,k);
    cout<<"Smallest Range II= " <<result<<endl;
    return 0;
}