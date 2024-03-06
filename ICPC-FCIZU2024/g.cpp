#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int t; cin >> t;
    char arr[11] = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
    while (t--) {
        string str; cin >> str;
        string s2 = str;
        bool iss = true;
        for (int i = 0; i < str.length(); i++) {
            bool iyy = false;
            for (int j = 0; j < 11; j++) {
                if (str[i] == arr[j]) {
                    iyy = true;
                }
            }
            if (iyy == false) {
                iss = false;
                break;
            }
        }

        if (!iss) {
            cout << "no\n";
            continue;
        }
        reverse(s2.begin(), s2.end());
        if (str == s2) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
