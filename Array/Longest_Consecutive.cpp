#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    if(nums.size()==0) return 0;
    int res = 0, c = 0;
    sort(nums.begin(), nums.end());
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[i-1]) continue;  
        if(nums[i] - nums[i-1] == 1) {
            c++;
            res = max(res, c);
        } else {
            c = 0;
        }
    }
    return res + 1; 
}
int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Input array: ";
    for (int x : nums) cout << x << " ";
    cout << endl;
    int result = longestConsecutive(nums);
    cout << "Longest Consecutive Sequence Length: " << result << endl;
    return 0;
}