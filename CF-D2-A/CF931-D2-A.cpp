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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        cout << abs(a[0]-a[n-1]) + abs(a[n-1]-a[1]) + abs(a[1]-a[n-2]) + abs(a[n-2]-a[0]) << endl;
        // |ai−aj|+|aj−ak|+|ak−al|+|al−ai|
    }
    return 0;
}
