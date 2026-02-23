#include<bits/stdc++.h>
using namespace std;
vector<int>findMajority(vector<int>& arr){
    int n=arr.size()/3;
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    vector<int> ans;
    for(auto &ip: mp){
        if(ip.second > n)
            ans.push_back(ip.first);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 2, 2};
    vector<int> result = findMajority(arr);
    cout << "Majority elements (> n/3 times): ";
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}