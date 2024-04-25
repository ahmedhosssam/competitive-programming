#include <iostream>
#include <cassert>
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
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int mx = a[n-1];
        for (int i = 0; i < n-1; i++) {
            int tt = (mx-a[i])/k;
            a[i]+= tt*k;
            assert(a[i]<=mx);
        }
        for (int i = 0; i < n; i++) {
            a[i]+=k;
        }
        sort(a.begin(), a.end());
        //for (int i = 0; i < n; i++) {
        //    cout << a[i] << " ";
        //}
        //cout << endl;
        cout << a[n-1]-a[0] << endl;
    }
    return 0;
}
