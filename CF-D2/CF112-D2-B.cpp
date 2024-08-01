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

int midpoint(int start, int end) {
    return start + (end-start)/2;
}

int bs(int n, int k) {
    int l = 1;
    int r = n;
    while (l != r) {
        int x = midpoint(l, r);
        int middle = x;
        int sum = 0;
        while (x!=0) {
            sum += x;
            x /= k;
        }
        if (sum >= n) {
            r = middle;
        } else {
            l = middle+1;
        }
    }
    return l;
}

int32_t main() {
    int n, k; cin >> n >> k;
    cout << bs(n, k) << endl;
    return 0;
}
