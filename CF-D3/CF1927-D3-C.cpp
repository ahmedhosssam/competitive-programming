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
    while(t--) {
        int n, m, k; cin >> n >> m >> k;
        if(k==1) {
            cout << "NO\n";
            continue;
        }
        vector<int> vis1(k+1, 0);
        vector<int> vis2(k+1, 0);
        vector<int> vis3(k+1, 0);
        int g1 = 0;
        int g2 = 0;
        int in;
        for (int i = 0; i < n; i++) {
            //cin >> arr1[i];
            cin >> in;
            if(in<=k) {
                if(!vis1[in]) {
                    vis1[in]++;
                    vis3[in]++;
                    g1++;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            //cin >> arr2[i];
            cin >> in;
            if(in<=k) {
                if(!vis2[in]) {
                    vis2[in]++;
                    vis3[in]++;
                    g2++;
                }
            }
        }

        bool ok = true;
        for (int i = 1; i <= k; i++) {
            if(!vis3[i]) {
                ok=false;
            }
        }

        if(g1>=k/2 && g2>=k/2 && ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
