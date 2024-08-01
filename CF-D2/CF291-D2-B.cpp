#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int n, x0, y0;
    cin >> n >> x0 >> y0;
    int x[n];
    int y[n];
    vector<int> k(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int res = 0;

    for (int i = 0; i < n; i++) {
        int x2 = x[i];
        int y2 = y[i];
        if (k[i]) { continue; }
        res++;
        int dx1 = x[i]-x0, dy1 = y[i]-y0;
        for (int j = 0; j < n; j++) {
            int dx2 = x[j]-x0,dy2= y[j]-y0;
            if (dx2 * dy1 == dx1 * dy2) {
                k[j]=1;
            }
        }
    }

    cout << res << endl;

    return 0;
}
