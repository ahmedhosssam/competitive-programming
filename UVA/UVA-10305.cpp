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
vector<vector<int>> graph; // adj list
vector<int> vis; 

void dfs(int cur) {
    if (vis[cur]) {
        return;
    }
    vis[cur] = 1;
    for (int i = 0; i < graph[cur].size(); i++) {
        int child = graph[cur][i];
        if (!vis[child]) {
            dfs(graph[cur][i]);
        }
    }
    cout << cur << " ";
}

int32_t main() {
    while (cin >> n >> m && n!=0) {
        graph.clear();
        vis.clear();
        graph = vector<vector<int>>(n+1);
        vis = vector<int>(n+1, 0);
        int x, y;
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            graph[x].push_back(y);
        }
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                dfs(i);
            }
        }
        cin >> x >> y;
        cout << endl;
    }
    
    return 0;
}
