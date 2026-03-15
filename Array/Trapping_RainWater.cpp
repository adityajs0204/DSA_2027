#include <bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
    int l=0,r=height.size()-1,lmax=0,rmax=0,ans=0;
    while(l<r){
        if(height[l]<height[r]){
            if(height[l]>=lmax) lmax=height[l];
            else ans+=(lmax-height[l]);
            l++;
        }
        else{
            if(height[r]>=rmax) rmax=height[r];
            else ans+=(rmax-height[r]);
            r--;
        }
    }
    return ans;
}
int main() {
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    int trappedWater=trap(height);
    cout<<"Total trapped rain water: "<<trappedWater<<endl; 
    return 0;
}