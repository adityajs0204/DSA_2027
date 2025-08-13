#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};
int main() {
    Solution sol;
    int n;
    cin >> n;
    if (sol.isPowerOfThree(n)) {
        cout << n << " is a power of three.\n";
    } else {
        cout << n << " is NOT a power of three.\n";
    }
    return 0;
}