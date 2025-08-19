#include <bits/stdc++.h>
using namespace std;

long long zeroFilledSubarray(vector<int>& nums) {
    long long c = 0, a = 0;  
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            a++;
            c += a;  
        } else {
            a = 0; 
        }
    }
    return c;
}

int main() {
    vector<int> nums = {0, 0, 0, 2, 0, 0};
    
    cout << "Number of zero-filled subarrays: " 
         << zeroFilledSubarray(nums) << endl;

    return 0;
}