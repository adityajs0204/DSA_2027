#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> m;
    vector<int> res;
    for (int n : nums1) m[n]++;
    for (int n : nums2) {
        if (m[n] > 0) {
            res.push_back(n);
            m[n]--;
        }
    }
    return res;
}

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> nums1(n1);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) cin >> nums1[i];
    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> nums2(n2);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) cin >> nums2[i];
    vector<int> result = intersect(nums1, nums2);
    cout << "Intersection: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}