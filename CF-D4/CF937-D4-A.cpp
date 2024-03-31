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
        int a, b, c; cin >> a >> b >> c;
        if (a < b && b < c && a < c) {
            cout << "STAIR\n";
        } else if (a < b && b > c) {
            cout << "PEAK\n";
        } else {
            cout << "NONE\n";
        }
    }
    return 0;
}
