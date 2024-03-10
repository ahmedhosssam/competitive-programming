#include <iostream>
#include <string>
#include <cstring>
#include <cstdint>
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
        if (n == 2 || n == 3) {
            cout << "second\n";
        } else {
            cout << "first\n";
        }
    }
    return 0;
}
