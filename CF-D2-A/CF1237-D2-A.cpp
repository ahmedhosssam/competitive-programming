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
    int n; cin >> n;
    int x;
    int g = 1;
    for (int i=0;i<n;i++) {
        cin >> x;
        if (x%2==0) {
            cout << x/2 << endl;
        } else {
            cout << (x+g)/2 << endl;
            g*=-1;
        }
    }
    return 0;
}
