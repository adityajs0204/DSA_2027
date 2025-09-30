#include <bits/stdc++.h>
using namespace std;
vector<long long> sumOfThree(long long num) {
    if (num % 3 == 0) {
        return {num / 3 - 1, num / 3, num / 3 + 1};
    } else {
        return {};
    }
}
int main() {
    long long num = 33;
    cout << "Input number: " << num << endl;
    vector<long long> result = sumOfThree(num);
    if (result.empty()) {
        cout << "No valid sequence exists." << endl;
    } else {
        cout << "Sequence: ";
        for (long long x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}