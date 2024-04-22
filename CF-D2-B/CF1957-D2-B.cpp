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

// for(int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int am = 1 ,mk = k;
        if (n==1) {
            cout << k << "\n";
            continue;
        }

        mk++;
        while (mk>=2) {
            mk/=2;
            am*=2;
        }
        cout << am-1 << " " << k-am+1 << " ";
        for (int  i = 2; i < n; i++) {
            cout<< 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
