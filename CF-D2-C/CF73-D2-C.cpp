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
        int c, m, x; cin >> c >> m >> x;
        int g = (c+m+x)/3;
        cout << min(c, min(m, g)) << endl;
    }
    return 0;
}
