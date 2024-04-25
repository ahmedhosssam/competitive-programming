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
    while (t--) {
        int n; cin >> n;
        int res = 0;
        for(int i = 1; i <= n/2; i++) {
            //res += pow(i, 2);
            res += pow(i,2);
        }
        cout << res*8 << endl;
    }
    return 0;
}
