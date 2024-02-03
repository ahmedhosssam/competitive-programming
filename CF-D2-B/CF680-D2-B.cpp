#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int n; cin >> n;
    int a; cin >> a;
    int arr[n+1];
    bool vis[n+1];
    for (int i = 1; i<=n; i++) {
        cin >> arr[i];
        vis[i] = false;
    }

    int res = 0;
    if (arr[a] ==1) { res++; }

    for (int i = 1; i <= n; i++) {
        if (i == a) { continue; }
        if (arr[i] == 1) {
            if (vis[i]) { continue; }
            vis[i] = true;
            int d2;
            if (i < a) {
                d2 = abs(i-a) + a;
            } else {
                d2 = a - abs(i-a);
            }
            if (d2 > n || d2 < 1) {
                res++;
            } else if (arr[d2] == 1 && arr[d2] <= n && arr[d2] > 0) {
                res+= 2;
                vis[d2] = true;
            }
        }
    }
    cout << res << endl;

    return 0;
}
