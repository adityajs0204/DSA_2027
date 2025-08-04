#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int max=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count=0;
            }
             if (nums[i] == 1) {
                count++;
                if(max<count){
                    max=count;
                }
            }
        }
        return max;
        }


        int main() {
            vector<int> nums = {1, 1, 0, 1, 1, 1};
            cout << "Maximum consecutive ones: " << findMaxConsecutiveOnes(nums) << endl;
            return 0;
        }