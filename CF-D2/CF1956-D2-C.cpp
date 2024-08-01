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

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        // 1 for row, 2 for column
        int sum = 0;
        for(int i=1;i<=n;i++) {
            sum+=(2*i-1)*i;
        }
        cout << sum << " " << 2*n << endl;
        for(int i=n;i>=1;i--) {
            cout << "1 " << i << " ";
            for(int j=1;j<=n;j++) {
                cout << j << " ";
            }
            cout << endl;
            cout << "2 " << i << " ";
            for(int j=1;j<=n;j++) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
