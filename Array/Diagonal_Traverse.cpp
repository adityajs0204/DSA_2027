#include <bits/stdc++.h>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    if(mat.empty() || mat[0].empty()) return {};
    int r=0,c=0;
    int m=mat.size(), n=mat[0].size();
    vector<int>res(m*n);
    for(int i=0;i<m*n;i++){
        res[i]=mat[r][c];
        if((r+c)%2==0){
            if(c==n-1) r++;
            else if(r==0) c++;
            else {
                r--;
                c++;
            }
        }
        else{
            if(r==m-1) c++;
            else if(c==0) r++;
            else{
                r++;
                c--;
            }
        }  
    }
    return res;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<int> result = findDiagonalOrder(mat);
    cout << "Diagonal Order Traversal: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}