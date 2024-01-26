#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    string t; cin >> t;
    string res;

    if (t == "10") {
        if (n<2) {
            res = "-1";
        } else {
            res += '1';
            for (long i = 1; i < n; i++) {
                res += '0';
            }
        }
    } else {
        for (long i = 0; i < n; i++) {
            res += t;
        }
    }
    cout << res << endl;

    return 0;
}
