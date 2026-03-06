#include <bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
    int n=nums.size();
    unordered_map<int,int>mp;
    vector<int>vals;
    for(int i=0;i<n;i++){
        if(nums[i]>0) mp[nums[i]];
    }
    for(auto &ip:mp){
        vals.push_back(ip.first);
    }
    sort(vals.begin(),vals.end());
    int val=1;
    for(int i=0;i<vals.size();i++){
        if(val!=vals[i]) break;
        else val++;
    }
    return val;
}
int main() {
    vector<int> nums = {3, 4, -1, 1};
    cout << "Array: ";
    for (int n : nums) cout << n << " ";
    cout << endl;
    int result = firstMissingPositive(nums);
    cout << "First Missing Positive: " << result << endl;
    return 0;
}