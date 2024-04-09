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

int n, m; 
vector<vector<int>> arr;
vector<int> vis;

//#define int long long

void dfs(int i, int& v, int& e) {
    if (vis[i]) { return; }
    vis[i] = 1;
    e+=arr[i].size();
    v++;
    for (int b : arr[i]) {
        if (!vis[b]) {
            dfs(b, v, e);
        }
    }
}

int32_t main() {
    cin >> n >> m;
    arr = vector<vector<int>>(n+1);
    vis = vector<int>(n+1, 0);
    int x, y;
    for (int i = 0 ; i < m; i++) {
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    for (int i = 1 ; i <= n; i++) {
        if (!vis[i]) {
            int v = 0;
            int e = 0;
            dfs(i, v, e);
            if (e!=(v*(v-1))) {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}
