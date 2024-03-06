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
    if (n >= 1 && n <= 6) {
        cout << "Square 1\n";
    } else if (n >= 7 && n <= 12) {
        cout << "Square 2\n";
    } else if (n >= 13 && n <= 20) {
        cout << "Square 3\n";
    }
    return 0;
}
