#include <bits/stdc++.h>
using namespace std;
int triangularSum(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            nums[j] = (nums[j] + nums[j + 1]) % 10;
        }
    }
    return nums[0];
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int result = triangularSum(nums);
    cout << "Triangular Sum: " << result << endl;
    return 0;
}