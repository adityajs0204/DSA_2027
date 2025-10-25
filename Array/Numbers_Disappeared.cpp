#include <bits/stdc++.h>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[abs(nums[i]) - 1] < 0) continue;
        else nums[abs(nums[i]) - 1] *= -1;
    }
    int val = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) nums[val++] = i + 1;
    }
    for (int i = val; i < n; i++) {
        nums.pop_back();
    }
    return nums;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " numbers (values from 1 to " << n << "): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> result = findDisappearedNumbers(nums);

    cout << "Missing numbers are: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}