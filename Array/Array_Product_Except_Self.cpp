#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int val=1,z=0;
    vector<int>ans(nums.size(),0);
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) z++;
        else val*=nums[i];
    }
    for(int i=0;i<nums.size();i++){
        if(z>=2) return ans;
        else if(z==1){
            if(nums[i]==0) ans[i]=val;
            else continue;
        }
        else ans[i]=val/nums[i];
    }
    return ans;
}

int main() {
    vector<int>nums={1,2,3,4};
    vector<int>result=productExceptSelf(nums);
    cout<<"Output: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}