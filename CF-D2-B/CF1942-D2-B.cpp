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
        vector<int> a(n);
        for(int& i: a) {
            cin >> i;
        }
        vector<int> p(n), vis(n + 1);
        int mex = 0;
        for(int i = 0; i < n; i++){
            if(a[i] >= 0){
                p[i] = mex;
            } else {
                p[i] = mex - a[i];
            }
            vis[p[i]] = true;
            while(vis[mex]) {
                mex++;
            }
        }
        for(int i: p) cout << i << " ";
        cout << "\n";
    }
}
