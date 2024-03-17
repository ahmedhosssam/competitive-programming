#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int n;
    cin >> n;
    int prev = -1;
    long long result = 0;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        if (v == 1) {
            if (prev == -1) {
                result = 1;
            } else {
                result *= i - prev;
            }
            prev = i;
        }
    }

    cout << result << endl;
    return 0;
}
