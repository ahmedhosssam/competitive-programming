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
        int n, k; cin >> n >> k;
        vi a(n);
        vi b(n);
        frr(i, 0, n-1) {
            cin >> a[i];
        }
        frr(i, 0, n-1) {
            cin >> b[i];
        }
        int res = 0;
        int sum = 0;
        int mx = 0;
        vi vis(n, 0);
        for(int i = 0 ; i < min(n, k); i++) {
            sum += a[i];
            mx = max((int)mx, (int)b[i]);
            res = max(res, sum + mx*(k-i-1));
        }
        cout << res << endl;
    }
    return 0;
}
