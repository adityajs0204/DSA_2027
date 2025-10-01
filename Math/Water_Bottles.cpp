#include <bits/stdc++.h>
using namespace std;
int numWaterBottles(int numBottles, int numExchange) {
    int res = 0, kali = 0;
    while (numBottles) {
        res += numBottles;
        kali += numBottles;
        numBottles = kali / numExchange;
        kali = kali % numExchange;
    }
    return res;
}
int main() {
    int numBottles = 9, numExchange = 3;
    cout << "Input: numBottles = " << numBottles << ", numExchange = " << numExchange << endl;
    cout << "Output: " << numWaterBottles(numBottles, numExchange) << endl;
    return 0;
}