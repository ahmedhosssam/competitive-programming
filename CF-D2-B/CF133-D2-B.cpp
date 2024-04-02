#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long

int n, m; 
vector<vector<int>> g;
vector<int> vis;

int dfs(int cur, int par, int &cnt) {
    if (vis[cur]) {
        return 1;
    }
    vis[cur] = 1;

    for(auto child_node : g[cur]) {
        if(child_node != par) {
            cnt++;
            if(dfs(child_node, cur, cnt) == 1) {
                return 1;
            }
        }
	}
    return 0;
}

int32_t main() {
    cin >> n >> m;
    g = vector<vector<int>>(n);
    vis = vector<int>(n, 0);

    int res = 0;

    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        x--, y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        int solve = dfs(i, -1, cnt);

        if (solve) {
            res += (cnt%2==1);
        }

    }
    if ( (n-res)%2 == 1) {
        res++;
    }

    cout << res << endl;

    return 0;
}
