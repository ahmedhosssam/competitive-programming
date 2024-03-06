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
    int t; cin >>t;
    while (t--) {
        int n; cin >>n;
        int res = 0;
        if (n%5 == 0) {
            res = n/5;
        } else {
            res = n/5+1;
        }
        cout << res << endl;
    }
    return 0;
}
