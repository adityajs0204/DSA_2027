#include<bits/stdc++.h>
using namespace std;
int lis(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n, 1);
    int ans=1;
    for(int i=1;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(arr[j] < arr[i]) {
                dp[i]=max(dp[i], dp[j] + 1);
            }
        }
        ans=max(ans, dp[i]);
    }
    return ans;
}
int main()
{
    vector<int> arr = {5, 8, 3, 7, 9, 1};
    int result = lis(arr);
    cout << "Length of Longest Increasing Subsequence = " << result << endl;
    return 0;
}