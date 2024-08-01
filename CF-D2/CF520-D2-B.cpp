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

int n, m;
vector<int> adj(100001, 0);

void dfs(int x, int t) {
    //cout << x << endl;
    if (x <= 0 || x >= m*2) {
        return;
    }
    if(adj[x]<=t &&adj[x]>0) {
        //adj[x] = min(t, adj[x]);
        return;
    }
    adj[x]=t;
    dfs(x-1, t+1); 
    dfs(x*2, t+1); 
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
    if (n>m) {
        cout << n-m << endl;
    } else {
        dfs(n, 0);
        cout << adj[m] << endl;
    }
    return 0;
}
