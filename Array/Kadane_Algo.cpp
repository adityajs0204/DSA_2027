#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxi = nums[0], curr = 0;
    for (int n : nums) {
        curr += n;
        maxi = max(maxi, curr);
        if (curr < 0) curr = 0;
    }
    return maxi;
}
int main() {
    vector<int> nums = {2, 3, 5, -2, 7, -4};
    cout << "Array: ";
    for (int n : nums) cout << n << " ";
    cout << endl;
    int result = maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << result << endl;
    return 0;
}