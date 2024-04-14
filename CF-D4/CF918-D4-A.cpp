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
    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        if (a==b) {
            cout << c << endl;
        } else if (b==c) {
            cout << a << endl;
        } else if (a==c) {
            cout << b << endl;
        }
    }
    return 0;
}
