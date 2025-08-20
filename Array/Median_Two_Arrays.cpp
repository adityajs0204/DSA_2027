#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());  // merge
        sort(nums1.begin(), nums1.end());                       // sort merged array

        int val = nums1.size();
        if (val % 2 == 0) {
            return (nums1[val/2] + nums1[val/2 - 1]) / 2.0;     // floating-point division
        } else {
            return nums1[val/2];
        }
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    double median = sol.findMedianSortedArrays(nums1, nums2);

    cout << "Median is: " << median << endl;

    return 0;
}