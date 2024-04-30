#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long

// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while(t--) {
        int x, n; cin >> x >> n;
        int res = 0;
        for (int i = 1; i*i <= x; i++) {
            if (x % i == 0) {
                if (x / i >= n) {
                    res = max(res, i);
                }
                if (i >= n) {
                    res = max(res, x / i);
                }
            }
        }
        cout << res << endl;
    }
}
