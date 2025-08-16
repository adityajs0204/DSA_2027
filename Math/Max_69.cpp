#include <bits/stdc++.h>
using namespace std;
int maximum69Number (int num) {
    string val = to_string(num);
    for (int i = 0; i < val.size(); i++) {
        if (val[i] == '6') {
            val[i] = '9';
            break;  
        }
    }
    return stoi(val);
}
int main() {
    int num;
    cin >> num;
    int result = maximum69Number(num);
    cout << "Maximum number after conversion: " << result << endl;
    return 0;
}