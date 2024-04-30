#include <bits/stdc++.h>
using namespace std;

#define int long long
int res = 0;
vector<string> adj;
vector<vector<int>> vis;

int32_t main() {
    int h, w; cin >> h >> w;
    adj= vector<string>(h);
    for(int i = 0 ; i < h; i++) {
        cin >> adj[i];
    }
    vis = vector<vector<int>>(h, vector<int>(w, 0));
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            bfs(i,j);
        }
    }
    return 0;
}
