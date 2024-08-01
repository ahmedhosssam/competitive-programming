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
    int n, k; cin >> n >> k;

    if (n == 1) {
        cout << 0 << endl;
    }
    else if (k >= n) {
        cout << 1 << endl;
    } else {
        int res = 0;
        int sum = (n*(n+1))/2;
        --k;
        --n;
        if (sum < n) {
            cout << -1 << endl;
        } else {
            int start = 1;
            int end = k;
            while (start < end) {
                int mid = (start+end)/2;
                int s = 0;
                for (int i = mid; i <= k; i++) {
                    s += i;
                }
                if (s == n) {
                    res = k-mid+1; 
                    break;
                }

                if (s > n) {
                    start = mid+1;
                } else {
                    end = mid;
                }
            }
            if (res) {
                cout << res << endl;
            } else {
                cout << k-start+2 << endl;
            }
        }
    }

    return 0;
}
