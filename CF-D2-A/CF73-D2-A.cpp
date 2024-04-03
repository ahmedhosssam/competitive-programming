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

#define int long long

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int x;
        int res = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x <= 2048) {
                res += x;
            }
        }

        if (res >= 2048) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
