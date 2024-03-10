#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cstdint>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int n; cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        a.push_back(p);
    }

    int res = 0;
    /*
    if (n == 1) {
        res = 1;
    }
    */

    int cmp = -1000000030;
    int tx;
    for (int i = 0; i < n; i++) {
        int g1 = a[i].first-a[i].second;
        int g3 = a[i].first+a[i].second;
        int g2 = a[i].first;

        if (g1 > cmp) {
            cmp = g2;
            res++;
        } else if (g2 > cmp) {
            cmp = g3;
            res++;
        } else if (g1 > tx) {
            cmp = g2;
        } else {
            cmp = g3;
        }
        tx = g2;
    }
    cout << res << endl;

    return 0;
}
