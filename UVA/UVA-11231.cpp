#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define int long long

int32_t main() {
    int n;
    int m;
    int c;

    while (cin >> n >> m >> c && n != 0) {
        int res = ((n-7)*(m-7)+c)/2;
        cout << res << endl;
    }
    return 0;
}
