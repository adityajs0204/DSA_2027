#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int t = 0, res = nums[0];
    for (int n : nums) {
        if (t < 0) t = 0;
        t += n;
        res = max(res, t);
    }
    return res;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}