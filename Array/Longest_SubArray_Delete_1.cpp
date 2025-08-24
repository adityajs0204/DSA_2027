#include <bits/stdc++.h>
using namespace std;


int longestSubarray(vector<int>& nums) {
    int l = 0, a = 0, z = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) z++;
        while (z > 1) {
            if (nums[l] == 0) z--;
            l++;
        }
        a = max(a, i - l);
    }
    return a;
}

int main() {
    vector<int> nums = {0,1,1,1,0,1,1,0,1};
    cout << "Output for [0,1,1,1,0,1,1,0,1]: " << longestSubarray(nums) << endl;
    return 0;
}