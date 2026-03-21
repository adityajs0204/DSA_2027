#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices) {
    int n=prices.size(),ans=0;
    for(int i=1;i<n;i++){
        if(prices[i]>prices[i-1]) ans+=prices[i]-prices[i-1];
    }
    return ans;
}
int main()
{
    vector<int>prices={7, 1, 5, 3, 6, 4};
    int result=maxProfit(prices);
    cout<<"Maximum profit= " <<result<<endl;
    return 0;
}