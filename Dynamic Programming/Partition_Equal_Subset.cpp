#include <bits/stdc++.h>
using namespace std;

bool canPartition(vector<int>& nums) {
    int s = 0;
    for (int i = 0; i < nums.size(); i++) s += nums[i];
    if (s % 2 != 0) return 0;
    int t = s / 2;
    vector<bool> dp(t + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = t; j >= nums[i]; j--) {
            dp[j] = dp[j] || dp[j - nums[i]];
        }
    }
    return dp[t];
}

int main() {
    vector<int> nums = {1, 5, 11, 5};  // Example input

    if (canPartition(nums)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}