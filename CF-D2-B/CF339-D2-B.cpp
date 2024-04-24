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

    // for (int i = 0; i < n; i++) {
int32_t main() {
    int n, m; cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    int res = 0;
    int j = 1;
    for (int i = 0; i < m; i++) {
        if(j<=a[i]) {
            res+= a[i]-j;
        } else if (j>a[i]) {
            res+= (n-j)+a[i];
        }
        j=a[i];
    }
    cout << res << endl;
    return 0;
}
