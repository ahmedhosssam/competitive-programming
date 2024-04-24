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
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> pre(n+1, 0);
        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + (s[i] == '1');
        }
        int index = -1;
        for (int i = 0; i <= n; i++) {
            if ((pre[i] <= i / 2) && ((pre[n] - pre[i]) >= (n - i + 1) / 2) && (abs((n / 2.0) - index) > abs((n / 2.0) - i)))
                index = i;
        }
        cout << index << endl;
    }
    return 0;
}
