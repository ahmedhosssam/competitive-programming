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

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.in", "r", stdin);
    /*
    freopen("wormsort.out", "w", stdout);
    */
    int n, m; cin >> n >> m;
    int a[n+1];
    int graph[n+1][n+1];
    int res = INT_MIN;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            graph[i][j] = INT_MAX;
        }
    }
    for(int i = 0 ; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        graph[a][b]=c;
        graph[b][a]=c;
    }

    int dist[n+1];
    bool sptSet[n+1];
    for (int i = 1; i <= n; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    for(int p = 1; p <= n; p++) {
        if(a[p]==p) {
            continue;
        }
        int src = p;
        dist[src] = 0;

        for (int count = 1; count <= n-1; count++) {
            int u;
            int mn = INT_MAX;

            for (int v = 1; v <= n; v++) {
                if (sptSet[v] == false && dist[v] <= mn) {
                    mn = dist[v];
                    u = v;
                }
            }
            sptSet[u] = true;

            for (int v = 1; v <= n; v++)
                if (!sptSet[v] && graph[u][v]
                    && dist[u] != INT_MAX
                    && dist[u] + graph[u][v] < dist[v]) {
                    dist[v] = dist[u] + graph[u][v];
                    //res = max(res, graph[u][v]);
                }
        }
        res = max(res, dist[a[p]]);
        swap(a[p], a[a[p]]);
    }

    if(res!=INT_MIN) {
        cout << res << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
