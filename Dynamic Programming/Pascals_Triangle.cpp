#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> g(numRows);
    for (int i = 0; i < numRows; i++) {
        g[i].resize(i + 1);
        g[i][0] = g[i][i] = 1;
        for (int j = 1; j < i; j++) {
            g[i][j] = g[i - 1][j - 1] + g[i - 1][j];
        }
    }
    return g;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> g = generate(n);
    for (int i = 0; i < g.size(); ++i) {
        for (int j = 0; j < g[i].size(); ++j) {
            cout << g[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}