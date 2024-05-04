#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
//#define int long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define frr(i, a, b) for(int i = a; i <= b; i++)

// for (int i = 0; i < n; i++) {
int32_t main() {
    //freopen("planting.in", "r", stdin);
    //freopen("planting.out", "w", stdout);
    int n; cin >> n;
    int res = 0;
    vector<vector<int>> adj(n+1);
    for(int i = 0; i < n-1; i++) {
        int x, y; cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    int s = 1;

    queue<int> q;
    vector<int> used(n, 0);

    //q.push(s);
    //used[s] = 1;
    //resArr[1]=1;
    int mx = 1;
    for(int i = 0; i < adj.size(); i++) {
        mx = max(mx, int(adj[i].size()));
    }
    /*
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        int g = 1;
        for (int u : adj[v]) {
            if (used[u]==0) {
                used[u]=1;
                q.push(u);
                g++;
            }
        }
        if(g>mx) {
            mx=g;
        }
    }
    */
    cout << mx+1 << endl;
    return 0;
}
