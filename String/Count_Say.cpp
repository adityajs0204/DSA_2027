#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n) {
    string res = "1";
    for (int i = 1; i < n; i++) {
        string t = "";
        int c = 1;
        for (int j = 1; j < res.size(); j++) {
            if (res[j - 1] == res[j]) 
                c++;
            else {
                t += to_string(c);
                t += res[j - 1];
                c = 1;
            }
        }
        t += to_string(c) + res.back();
        res = t;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << "The " << n << "th term of the count-and-say sequence is: "<< countAndSay(n) << endl;

    return 0;
}