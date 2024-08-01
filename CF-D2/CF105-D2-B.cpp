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
    int vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;
    if (vp >= vd) {
       cout << 0 << endl;
       return 0;
    }

    double dp = t*vp;
    int res = 0;
    while (dp < c) {
          double T= (double)dp/ (double)(vd-vp);
          dp += T*vp;
          if (dp<c) {
              res++;
              dp += ((double)f+((double)dp/(double)vd))*(double)vp;
          }
    }
    cout << res << endl;

    return 0;
}
