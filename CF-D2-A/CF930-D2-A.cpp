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
        double g = log2(n);
        cout << long(floor(pow(2, long(g)))) << endl;
    }
    return 0;
}
