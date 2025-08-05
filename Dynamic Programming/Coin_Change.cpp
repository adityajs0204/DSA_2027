#include<bits/stdc++.h>
using namespace std;
int coinChange(vector<int>& coins, int amount) {
    if(amount==0) return 0;
    vector<int>dp(amount+1,10000);
    dp[0]=0;
    for(int i=1;i<=amount;i++){
        for(int j=0;j<coins.size();j++){
            if(coins[j]<=i){
                dp[i]=min(dp[i],1+dp[i-coins[j]]);
            }
        }
    }
    if(dp[amount]==10000) return -1;
    return dp[amount];
}
int main()
{
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    cout << "Minimum coins needed: " << coinChange(coins, amount) << endl;
    return 0;
}