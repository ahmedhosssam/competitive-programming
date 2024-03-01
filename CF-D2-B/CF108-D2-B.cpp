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
    int n, m; cin >> n >> m;
    int xc, yc; cin >> xc >> yc;

    int k; cin >> k;
    int res = 0;
    while (k--) {
        int dx, dy; cin >> dx >> dy;
        for (long long i = 1100000000; i >= 1; i /= 2) {
            while (xc+i*dx <= n && xc+i*dx >= 1 && yc+i*dy <= m && yc+i*dy >= 1) {
                xc = xc + i * dx;
                yc = yc + i * dy;
                res += i;
            }
        }
    }
    cout << res << endl;
    return 0;
}
