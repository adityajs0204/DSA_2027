#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
    int m=grid.size(),n=grid[0].size();
    vector<vector<int>>p(m,vector<int>(n));
    long long suffix=1;
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            p[i][j]=suffix;
            suffix=(suffix*(grid[i][j]%12345))%12345;
        }
    }
    long long prefix=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            p[i][j]=(p[i][j]*prefix)%12345;
            prefix=(prefix*(grid[i][j]%12345))%12345;
        }
    }
    return p;
}
int main() {
    int m = 2, n = 2;
    vector<vector<int>> grid = {
        {1, 2},
        {3, 4}
    };
    vector<vector<int>> result = constructProductMatrix(grid);
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }        cout << endl;
    }
    return 0;
}