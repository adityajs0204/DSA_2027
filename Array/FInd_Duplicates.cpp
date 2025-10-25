#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        int temp = abs(nums[i]) - 1;
        if (nums[temp] > 0)
            nums[temp] = nums[temp] * -1;
        else
            res.push_back(abs(nums[i]));
    }
    return res;
}
int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result = findDuplicates(nums);
    cout << "Duplicate numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}