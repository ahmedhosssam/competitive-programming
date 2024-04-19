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
        int n, k; cin >> n >> k;
        vector<int> arr(2*n);
        vector<int> vis(n+1, 0);
        k = 2 * k;

        vector<int> g0;
        vector<int> g1;
        vector<int> g2;

        for(int i=0;i<2*n;i++) {
            cin >> arr[i];
        }
        for(int i=0;i<n;i++) {
            vis[arr[i]]++;
        }
        for(int i=1;i<=n;i++) {
            if(vis[i]==0) {
                g0.push_back(i);
            } else if (vis[i]==1) {
                g1.push_back(i);
            } else {
                g2.push_back(i);
            }
        }
        //cout << g0.size() << " -- " << g1.size() << " -- " << g2.size() << endl;

        int g=0;
        for(int i = 0; i<g2.size();i++) {
            if(g<k) {
                g+=2;
                cout << g2[i] << " " << g2[i] << " ";
            }
        }

        for(int i = 0; i<g1.size();i++) {
            if(g<k) {
                g++;
                cout << g1[i] << " ";
            }
        }
        cout << endl;

        g=0;
        for(int i = 0; i<g0.size();i++) {
            if(g<k) {
                g+=2;
                cout << g0[i] << " " << g0[i] << " ";
            }
        }

        for(int i = 0; i<g1.size();i++) {
            if(g<k) {
                g++;
                cout << g1[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
