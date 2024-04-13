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

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        vector<int> vis(n+1, 0);
        int g;
        int res = 0;
        for (int i= 0; i < n; i++) {
            cin >> g;
            vis[g]++;
            if (vis[g]>1) {
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
