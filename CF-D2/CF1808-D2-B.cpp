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
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int a[n][m];
        for(int i = 0 ; i < n; i++) {
            for(int j = 0 ; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int res = 0;
        if (n==1) {
            cout << 0 << endl;
            continue;
        }
        for (int j = 0; j < m; j++) {
            int s = 0;
            for (int i = 0; i < n; i++) {
                s += a[i][j];
            }

            for (int i = 0; i < n; i++) {
                s -= a[i][j];
                res += s-(n-i-1) * a[i][j];
            }
        }
        cout << res << endl;
    }
    return 0;
}
