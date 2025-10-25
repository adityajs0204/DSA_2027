#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        if (k > 0) k -= 1;
        int temp = k;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto &p : mp) {
            if (p.second == 1) continue;
            else {
                int val = temp;
                if (temp < (k * -1) && temp > k) temp += k;
                mp[temp]++;
            }
        }

        for(auto &p: mp){
            cout<<p.first<<" "; 
        }
        return mp.size();
    }
};

int main() {
    Solution sol;
    
    // Example input
    vector<int> nums = {1, 2, 2, 3};
    int k = 1;

    // Function call
    int result = sol.maxDistinctElements(nums, k);

    // Output result
    cout << "Maximum number of distinct elements: " << result << endl;

    return 0;
}