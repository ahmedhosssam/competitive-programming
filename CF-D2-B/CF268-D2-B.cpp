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

// for (int i = 0; i < n; i++) {
int32_t main() {
    int n; cin >> n;
    int res = 0;
    for(int i = 1; i < n; i++){
        res += (i * (n - i));
    }
    res += n;
    cout << res << endl;

    return 0;
}
