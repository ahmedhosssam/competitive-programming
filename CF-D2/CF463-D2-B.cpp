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
    int n; cin >> n;
    int x;
    int max = 0;
    for (int i = 0;i < n; i++) {
        cin >> x;
        if (x > max) { max = x; }
    }
    cout << max << endl;
    return 0;
}
