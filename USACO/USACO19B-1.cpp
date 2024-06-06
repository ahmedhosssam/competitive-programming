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
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    int k, n; cin >> k >> n;
    vector<vector<int>> a;
    for(int i =0 ; i< k; i++) {
        vector<int> g(n);
        for(int i = 0; i < n; i++) {
            cin >> g[i];
        }
        a.pb(g);
    }
    map<pair<int, int>, int> mp;
    for(int i = 0;i < k; i++) {
        for(int j = 0; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {
                mp[{a[i][j], a[i][k]}]++;
            }
        }
    }
    int res = 0;
    for(auto &x : mp) {
        if (x.second==k) {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}
