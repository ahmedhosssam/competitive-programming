#include <iostream>
#include <cmath>
using namespace std;

#define int long long
int32_t main() {
    int x; cin >> x;
    int n = 69;
    while (x--) {
        cin >> n;
        int res = 1;
        for (int i = 1; i <= n; i++) {
            res *= i;
        }
        cout << res << endl;
    }
    return 0;
}
