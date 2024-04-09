#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <cstdio>
#include <climits>
using namespace std;

#define int long long

int32_t main() {
    int n, k; cin >> n >> k;
    char arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j]='S';
        }
    }
    if (k>0) {
        bool ok = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int sum =i+j;
                if (k==0) {
                    break;
                }
                if (sum%2==0) {
                    arr[i][j]='L';
                    k--;
                }
            }
        }
    }
    if (k==0) {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    } else {
        cout << "NO\n";
    }
    return 0;
}
