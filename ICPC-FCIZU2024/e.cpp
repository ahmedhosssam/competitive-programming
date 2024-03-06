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
    while (t--) {
        int n; cin >> n;
        int nn = n;
        string str[3];
        cin >> str[0];
        cin >> str[1];
        cin >> str[2];
        int res = 0;
        int k = 0;
        while (nn--) {
            int gg = 0;
            for (int i = k; i < k+3; i++) {
                if (str[0][i] == '*') {
                    gg+=4;
                }
                if (str[1][i] == '*') {
                    gg+=4;
                }
                if (str[2][i] == '*') {
                    gg+=4;
                }
            }
            if (gg > res) {
                res = gg;
            }
            k += 3;
        }
        cout << res << endl;
    }
    return 0;
}
