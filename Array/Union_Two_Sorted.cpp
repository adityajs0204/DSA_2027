#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());
    unordered_set<int> s(nums1.begin(), nums1.end());
    vector<int> res(s.begin(), s.end());
    sort(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> nums1 = {1, 2, 4};
    vector<int> nums2 = {2, 3, 5};
    vector<int> result = unionArray(nums1, nums2);
    cout << "Union: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}