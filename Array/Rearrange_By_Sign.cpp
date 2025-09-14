#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> res(nums.size());
    int pi = 0, ni = 1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            res[pi] = nums[i];
            pi += 2;
        } else {
            res[ni] = nums[i];
            ni += 2;
        }
    }
    return res;
}

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    cout << "Original array: ";
    for (int n : nums) cout << n << " ";
    cout << endl;
    vector<int> result = rearrangeArray(nums);
    cout << "Rearranged array: ";
    for (int n : result) cout << n << " ";
    cout << endl;

    return 0;
}