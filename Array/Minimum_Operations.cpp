#include <bits/stdc++.h>
using namespace std;

vector<int> minOperations(string boxes) {
    vector<int> a;
    for (int i = 0; i < boxes.size(); i++) 
        if (boxes[i] == '1') a.push_back(i);

    vector<int> res;
    for (int i = 0; i < boxes.size(); i++) {
        int s = 0;
        for (int j = 0; j < a.size(); j++) {
            s += abs(a[j] - i);
        }
        res.push_back(s);
    }
    return res;
}

int main() {
    string boxes;
    cout << "Enter boxes string (e.g. 110): ";
    cin >> boxes;

    vector<int> ans = minOperations(boxes);

    cout << "Result: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}