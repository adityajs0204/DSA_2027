#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int z=0,o=0,t=0,val=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) z++;
        else if(nums[i]==1) o++;
        else t++;
    }
    for(int i=0;i<z;i++){
        nums[val]=0;
        val++;
    }
    for(int i=0;i<o;i++){
        nums[val]=1;
        val++;
    }
    for(int i=0;i<t;i++){
        nums[val]=2;
        val++;
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "Before sorting: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    sortColors(nums);

    cout << "After sorting: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}