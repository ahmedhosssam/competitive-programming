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
        if (n==2) {
            cout << -1 << endl;
            continue;
        }
        int g = 1;
        if(n%2==0) {
            g=2;
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(g==pow(n,2)) {
                    cout << g  << " ";
                    g=2;
                    if(n%2==0) {
                        g=1;
                    }
                    continue;
                }
                cout << g  << " ";
                g+=2;
            }
            cout << endl;
        }
    }
    return 0;
}
