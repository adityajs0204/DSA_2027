#include <bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {
    if (n <= 0) return false;
    while (n % 4 == 0) {
        n = n / 4;
    }
    if (n == 1) return true;
    else return false;
}

int main() {
    int n;
    cin >> n;
    if (isPowerOfFour(n))
        cout << n << " is a power of 4." << endl;
    else
        cout << n << " is NOT a power of 4." << endl;
    return 0;
}