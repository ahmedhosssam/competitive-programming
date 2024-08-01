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

vector<pair<int, int>> res;
vector<vector<int>> adj(100015);

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    int n; cin >> n;
    int x;
    for(int i = 1; i <= n; i++) {
        cin >> x;
        adj[x].pb(i);
    }

    for(int i = 1; i <= 100005; i++) {
        if(adj[i].size()==1) {
            res.pb({i, 0});
        } else if (adj[i].size()>1) {
            int g = abs(adj[i][0]-adj[i][1]);
            bool ok = true;
            for(int j = 2; j < adj[i].size(); j++) {
                if(abs(adj[i][j]-adj[i][j-1])!=g) {
                    ok=false;
                    break;
                }
            }
            if(ok) {
                res.pb({i, g});
            }
        }
    }
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++) {
        cout << res[i].F << " " << res[i].S << endl;
    }
    return 0;
}
