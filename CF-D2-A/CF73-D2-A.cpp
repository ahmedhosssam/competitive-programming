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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[12];
        for (int i = 0; i < 12; i++) {
            arr[i] = 0;
        }
        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == 1) {
                arr[0]++;
            } else if (x == 2) {
                arr[1]++;
            } else if (x == 4) {
                arr[2]++;
            } else if (x == 8) {
                arr[3]++;
            } else if (x == 16) {
                arr[4]++;
            } else if (x == 32) {
                arr[5]++;
            } else if (x == 64) {
                arr[6]++;
            } else if (x == 128) {
                arr[7]++;
            } else if (x == 256) {
                arr[8]++;
            } else if (x == 512) {
                arr[9]++;
            } else if (x == 1024) {
                arr[10]++;
            } else if (x == 2048) {
                arr[11]++;
            }
        }

        int res = 0;
        int g[12] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
        for (int i = 0; i < 12; i++) {
            res += arr[i]*g[i];
        }
        if (res >= 2048) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
