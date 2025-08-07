#include<bits/stdc++.h>>
using namespace std;
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m=obstacleGrid.size();
    int n=obstacleGrid[0].size();
    vector<vector<int>>g(m,vector<int>(n,0));
    if(obstacleGrid[0][0]==1) return 0;
    g[0][0]=1;
    for(int i=1;i<m;i++)
        if(obstacleGrid[i][0]==0) g[i][0]=g[i-1][0];
    for(int j=1;j<n;j++)
        if(obstacleGrid[0][j]==0) g[0][j]=g[0][j-1];
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(obstacleGrid[i][j]==0){
                if(i==0 || j==0) g[i][j]=1;
                else g[i][j]=g[i-1][j]+g[i][j-1];
            }
        }
    }
    return g[m-1][n-1];
}

int main() {
    int m, n;
    cin >>m>>n;
    vector<vector<int>> obstacleGrid(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> obstacleGrid[i][j];
        }
    }
    int result = uniquePathsWithObstacles(obstacleGrid);
    cout << "Number of unique paths: " << result << endl;
    return 0;
}