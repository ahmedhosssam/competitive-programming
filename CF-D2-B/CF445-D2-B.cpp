#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define int long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define frr(i, a, b) for(int i = a; i <= b; i++)
#define endl "\n"

// find the biggest connected component (using dfs for example)
// res = 1
// cnt <-- number of nodes in the component
// res = res * pow(2, cnt-1)

int n, m;
vector<vector<int>> adj(51);
vector<int> comp;
int vis[51];
void dfs(int v) {
    vis[v] = 1;
    comp.pb(v);
    for (int u : adj[v]) {
        if (!vis[u]) {
            dfs(u);
        }
    }
}

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    int g = 0;
    int res = 1;
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            comp.clear();
            dfs(i);
            //res += pow(2, (comp.size()-1));
            g += comp.size()-1;
        }
    }
    for(int i = 1; i <= g; i++) {
        res *= 2;
    }
    cout << res << endl;
    return 0;
}
