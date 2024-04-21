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
        int n; cin >> n;
        vector<int> arr(n);
        vector<int> vis(n+1, 0);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            vis[arr[i]]++;
        }
        int res = 0;
        for(int i = 1; i < n+1; i++) {
            //res += max(vis[i]/3, max(vis[i]/4, vis[i]/3+((vis[i]%4)/3)));
            res += max(vis[i]/3, vis[i]/4);
            /*
            if(vis[i]>=3) {
                if(vis[i]%3==0) {
                    res+=vis[i]/3;
                } else if(vis[i]%4==0) {
                    res+=vis[i]/4;
                } else {
                    res+=vis[i]/3;
                    res+=(vis[i]%4)/3;
                }
            }
            */
        }
        cout << res << endl;
    }
    return 0;
}
