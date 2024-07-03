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
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";}
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

int n, m;
vector<string> adj;
int vis[1001][1001];

bool checki(int i) {
    if (i<0||i>=n) {
        return true;
    }
    return false;
}

bool checkj(int j) {
    if (j<0||j>=m) {
        return true;
    }
    return false;
}

void dfs(int i, int j) {
    if (vis[i][j]) {
        return;
    }
    if (checki(i) || checkj(j)) {
        return;
    }
    if (adj[i][j]=='#') {
        return;
    }
    vis[i][j]=1;
    dfs(i+1, j);
    dfs(i-1, j);
    dfs(i, j+1);
    dfs(i, j-1);
}

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    cin >> n >> m;
    adj = vector<string>(n);
    for(int i = 0 ; i < n; i++) {
        cin >> adj[i];
    }
    for(int i = 0 ;i < n; i++) {
        for(int j = 0 ;j < m; j++) {
            vis[i][j]=0;
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && adj[i][j]=='.') {
                dfs(i, j);
                res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}
