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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mn = 999999999;
        int a[5] = {15, 10, 6, 3, 1};

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                for (int l = 0; l < 5; l++) {
                    for (int m = 0; m < 5; m++) {
                        int sum = i*a[1]+j*a[2]+l*a[3]+m*a[4];
                        if(sum <=n && (n-sum)%15==0) {
                            mn = min(mn, i+j+l+m+(n-sum)/15);
                        }
                    }
                }
            }
        }
        cout << mn << endl;
    }
    return 0;
}
