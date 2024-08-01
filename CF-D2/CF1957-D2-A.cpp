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
        vector<int> vis(105, 0);
        int res = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            vis[arr[i]]++;
            if(vis[arr[i]]%3==0) {
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
