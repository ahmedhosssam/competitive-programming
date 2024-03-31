#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;


int32_t main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        string n = "";
        for (int i = 0; i < 2; i++) {
            n += s[i];
        }
        int h = stoi(n);
        if (h == 0) {
            cout << 12 << ":" << s[3] << s[4] << " AM" << endl;
        } else if (n == "12") {
            cout << 12 << ":" << s[3] << s[4] << " PM" << endl;
        } else if (h <= 12) {
            cout << n << ":" << s[3] << s[4] << " AM" << endl;
        } else {
            if (h%12 < 10) {
                cout << 0 << h%12 << ":" << s[3] << s[4] << " PM" << endl;
            } else {
                cout << h%12 << ":" << s[3] << s[4] << " PM" << endl;
            }
        }
    }
    return 0;
}
