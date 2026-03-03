#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int n=nums.size(),k=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}
int main() {
    vector<int>nums={3,2,2,3, 4, 3};
    int val = 3;

    int k = removeElement(nums, val);

    cout <<"New length: "<<k<<endl;
    cout <<"Modified array: ";
    for(int i=0;i<k;i++) {
        cout<<nums[i]<<" ";
    }

    return 0;
}