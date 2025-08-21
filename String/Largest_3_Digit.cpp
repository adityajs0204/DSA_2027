#include <bits/stdc++.h>
using namespace std;

string largestGoodInteger(string num) {
    char max = 0;
    for (int i = 1; i < num.size() - 1; i++) {
        if ((num[i-1] == num[i]) && (num[i] == num[i+1])) {
            if (num[i] > max) max = num[i];
        }
    }
    if (max == 0) return "";
    return string(3, max);
}

int main() {
    string num;
    cout << "Enter the number string: ";
    cin >> num;

    string result = largestGoodInteger(num);
    if (result == "")
        cout << "No good integer found" << endl;
    else
        cout << "Largest Good Integer: " << result << endl;

    return 0;
}