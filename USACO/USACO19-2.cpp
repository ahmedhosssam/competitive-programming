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

/*
    the graph is directed
    we can do DFS (or even BFS idk) from every node, and make cnt[N] to count how many time each node has been visited, and if there exists cnt[i]==N, print this node.
*/

// for (int i = 0; i < n; i++) {
int32_t main() {
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);
    int n; cin >> n;
    vector<vector<int>> adj(n+1);
    for(int i = 0; i < n-1; i++) {
        int x, y; cin >> x >> y;
        adj[x].pb(y);
    }
    int s = 1;
    vector<int> cnt(n+1, 0);

    for(int i = 0; i < n; i++) {
        queue<int> q;
        vector<bool> used(n);

        q.push(s);
        used[s] = true;
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int u : adj[v]) {
                if (!used[u]) {
                    used[u] = true;
                    cnt[u]++;
                    q.push(u);
                }
            }
        }
        s++;
    }
    int p = -1;
    int gg = -1;
    for(int i = 1; i <= n; i++) {
        if(cnt[i]>gg) {
            gg=cnt[i];
            p=i;
        }
        //cout << cnt[i] << " ";
    }
    if(gg==n-1) {
        cout << p << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
