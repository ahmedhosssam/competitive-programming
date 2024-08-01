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
    int x; int y;
    while  (t--) {
        cin >> x >> y;
        int mx = max(x, y);
        int mn = min(x, y);
        if (mx/2 != mn && mx%2 == 0) {
            cout << "Yes\n";
        } else if (mn%2 == 0 && mn/2 != mx) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
