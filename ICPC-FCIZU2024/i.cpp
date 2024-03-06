#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
#include <cstdint>
using namespace std;

#define int long long

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int qq = q;
        int gg = 1;

        int x, p;
        cin >> x >> p;
        q--;
        int wx = x;
        int wp = p;

        bool hh = false;
        vector<pair<int, int>> hhh;
        while (q--) {
            cin >> x >> p;
            if (p > wp && x != wx) {
                hh = true;
                gg = abs(qq-q);
                hhh.push_back({x, gg+1});
                wp = p;
                wx = x;
            }
        }
        sort(hhh.begin(), hhh.end());
        if (hh) {
            cout << hhh[0].second << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
