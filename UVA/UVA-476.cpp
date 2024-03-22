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
    float upx[15];
    float upy[15];
    float dnx[15];
    float dny[15];

    float x1, y1, x2, y2;
    int n = 0;
    char t;
    while (true) {
        cin >> t;
        if (t=='*') { break; }
        cin >> x1 >> y1 >> x2 >> y2;
        upx[n] = x1;
        upy[n] = y1;
        dnx[n] = x2;
        dny[n] = y2;
        n++;
    }

    float x, y;
    int k = 0;
    while (true) {
        cin >> x >> y;
        if (x > 9999 && y > 9999) {
            break;
        }
        k++;
        bool g = false;
        for (int i = 0; i < n; i++) {
            /*
            printf("(%f, %f)\n", x, y);
            printf("(%f, %f)\n", dnx[i], dny[i]);
            printf("(%f, %f)\n", upx[i], upy[i]);
            cout << "-----------\n";
            */
            if (x > upx[i] && x < dnx[i] && y > dny[i] && y < upy[i]) {
                cout << "Point " << k << " is contained in figure " << i+1 << endl;
                g = true;
            }
        }
        if (!g) {
            cout << "Point " << k << " is not contained in any figure\n";
        }
    }

    return 0;
}
