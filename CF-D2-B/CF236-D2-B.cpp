#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    vector<int> arr(1000003, 0);
    int res = 0;

    int a, b, c; cin >> a >> b >> c;
    int m = a*b*c;

    for (int i = 1 ; i <= m; i++) {
        for (int j = i ; j <= m; j+=i) {
            arr[j]++;
        }
    }

    int mod = 1073741824;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                res += arr[i*j*k];
                res %= mod;
            }
        }
    }
    cout << res << endl;
    return 0;
}
