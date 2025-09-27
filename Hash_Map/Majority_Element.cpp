#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int,int> mp;
    for(int num : nums){
        mp[num]++;
    }
    vector<int> res;
    for(auto &i : mp){
        if(i.second > n/3) res.push_back(i.first);
    }
    return res;
}

int main() {
    vector<int> nums = {3, 2, 3};
    vector<int> result = majorityElement(nums);
    cout << "Majority elements: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}