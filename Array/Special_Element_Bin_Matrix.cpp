#include<bits/stdc++.h>
using namespace std;
int numSpecial(vector<vector<int>>& mat) {
    int m=mat.size(),n=mat[0].size();
    vector<int>rows(m,0);
    vector<int>col(n,0);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==1){
                rows[i]++;
                col[j]++;
            }
        }
    }
    int val=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==1){
                if(rows[i]==1 and col[j]==1) val++;
            }
        }
    }
    return val;
}

int main() {
    vector<vector<int>>mat={{1,0,0},{0,0,1},{1,0,0}};
    int result=numSpecial(mat);
    cout<<"Output: "<<result;

    return 0;
}