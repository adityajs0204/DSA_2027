#include <bits/stdc++.h>
using namespace std;
int totalMoney(int n) {
    int res = 0;
    while (n) {
        int r = n % 7;
        if (r == 0) r += 6;
        int d = n / 7;
        res = res + d + r;
        n--;
    }
    return res;
}
int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    int result = totalMoney(n);
    cout << "Total money after " << n << " days = " << result << endl;

    return 0;
}