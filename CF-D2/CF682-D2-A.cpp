#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>

#define int long long
using namespace std;

int32_t main() {
    int n; cin >> n;
    int m; cin >> m;
    int res = 0;

    for (int i = 1; i <= n; i++) {
        res+=(m+i%5)/5;
    }
    cout << res << endl;

    return 0;
}
