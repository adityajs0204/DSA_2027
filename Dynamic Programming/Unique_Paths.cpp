#include<bits/stdc++.h>
using namespace std;
int uniquePaths(int m, int n) {
    vector<vector<int>>g(m+1,vector<int>(n+1,0));
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i==0 || j==0) g[i][j]=1;
        else g[i][j]=g[i-1][j]+g[i][j-1];
    }
    return g[m-1][n-1];
}
}
int main() {
    int m, n;
    cin >>m>> n;
    int result = uniquePaths(m, n);
    cout << "Number of unique paths = " << result << endl;
    return 0;
}