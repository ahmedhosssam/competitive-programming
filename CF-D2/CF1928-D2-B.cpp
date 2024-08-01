#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <set>
#include <climits>
using namespace std;

#define int long long

        // for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        auto it = unique(a.begin(), a.end());
        a.erase(it, a.end());
        int res = 0;
        int j = 0;
        int g=0;
        for (int i = 0; i < a.size(); i++) {
            while(a[i]-a[j] >= n) {
                j++;
            }
            res = max (res, i-j+1);
        }
        cout << res << endl;
    }
    return 0;
}
