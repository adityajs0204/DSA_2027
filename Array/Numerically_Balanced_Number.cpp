#include <bits/stdc++.h>
using namespace std;
bool fun(int n) {
    int temp = n;
    vector<int> v(10, 0);
    while (temp > 0) {
        int r = temp % 10;
        if (r == 0) return false;  
        v[r]++;
        temp /= 10;
    }
    for (int i = 1; i <= 9; i++) {
        if (v[i] > 0 && v[i] != i) return false; 
    }
    return true;
}
int nextBeautifulNumber(int n) {
    int tmp = n + 1;
    while (1) {
        if (fun(tmp)) return tmp;
        else tmp++;
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = nextBeautifulNumber(n);
    cout << "Next beautiful number after " << n << " is: " << result << endl;
    return 0;
}