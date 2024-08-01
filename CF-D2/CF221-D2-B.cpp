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
    int n, m; cin >> n >> m;
    int a[m];
    int b[m];
    int c[m];
    vector<int> owe(n+1, 0);
    int res = 0;
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    for (int i = 0; i < m; i++) {
        owe[a[i]] += c[i];
        owe[b[i]] -= c[i];
    }

    for (int i = 0; i < n; i++) {
        if (owe[i] > 0) {
            res += owe[i];
        }
    }
    cout << res << endl;
    return 0;
}
