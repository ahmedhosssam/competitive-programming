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

// n   no. of messages
// f   init phone charge
// a   charge consume per time
// b   consume when turn off and on

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        vector<int> c(n);
        vector<int> visb(m, 0);
        for(int i = 0 ;i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0 ;i < m; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        long long s = 0;
        for (int i = 0; i < n; i++) {
            c[i] = b[m-n+i];
            s += abs(c[i]-a[i]);
        }
        int res = 0;
        for (int k = 0; k <= n; k++) {
            res = max(res, s);
            if (k < n) {
                s -= abs(c[k]-a[k]);
                c[k] = b[k];
                s += abs(c[k]-a[k]);
            }
        }
        cout << res << endl;
    }
    return 0;
}
