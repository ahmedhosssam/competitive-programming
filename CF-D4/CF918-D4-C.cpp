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

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int sum = 0;
        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum+=x;
        }
        int gg = sqrtl(sum);
        if (gg*gg==sum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
