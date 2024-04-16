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
    int t; cin >>t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        int res=n;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int l = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i]!=arr[0]) {
                res = min(res, i-l-1);
                l=i;
            }
        }
        res=min(res, n-l-1);
        if(res==n) {
            cout << -1 << endl;
        } else {
            cout << res << endl;
        }
    }
    return 0;
}
