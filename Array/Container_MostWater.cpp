#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
    int r=height.size()-1,l=0,ans=0;
    while(l<r){
        int h=min(height[l],height[r]);
        int w=r-l;
        ans=max(ans,w*h);
        if(height[l]<height[r]) l++;
        else r--;
    }
    return ans;
}
int main() {
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int maxWater=maxArea(height);
    cout<<"Maximum water that can be contained: "<<maxWater<<endl;
    return 0;
}