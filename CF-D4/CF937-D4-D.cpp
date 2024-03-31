#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
#include <bitset>
using namespace std;

#define int long long

int32_t main() {
    int t; cin >> t;
    vector<int> arr(500000, 0);
    vector<int> b;
    for (int i = 1; i <= 111111; i++) {
        int g = i;
        int u = true;
        while (g > 1) {
            if (g%10 != 1 && g%10 != 0) {
                u = false;
            }
            g /= 10;
        }
        if (u) {
            b.push_back(i);
        }
    }

    while (t--) {
        int n; cin >> n;
        int l = false;
        for (int i = 0 ; i < b.size(); i++) {
            if (n == b[i]) {
                l = true;
                break;
            }
        }
        for (int i = 0 ; i < b.size(); i++) {
            if (n%b[i] == 0) {
                n /= b[i];
                i = 0;
            }
        }
        if (n==1 || l) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
