#include <iostream>
#include <string>
#include <cstring>
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
        int n, a, b; cin >> n >> a >> b;
        int res1 = 0;
        int res2 = 0;
        if (n%2==0) {
            res1 = (n/2)*b;
        } else {
            res1 = (n/2)*b+a;
        }
        res2 = n*a;

        cout << min(res1, res2) << endl;
    }
    return 0;
}
