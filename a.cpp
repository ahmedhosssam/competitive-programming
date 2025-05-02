#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define sz(a) a.size()
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";} cout << endl;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

int MOD = 1e9+7;

void solve() {
    int n, x; cin >> n >> x;
    if (__builtin_popcountll(x) >= n) {
        cout << x << endl;
        return;
    }
    if (n==1 && x==0) {
        cout << -1 << endl;
        return;
    }
    if (x==1) {
        if (n&1) {
            cout << n << endl;
        } else {
            cout << n+3 << endl;
        }
        return;
    }

    if (x==0) {
        if (n&1^1) {
            cout << n << endl;
        } else {
            cout << n+3 << endl;
        }
        return;
    }

    int res = 0;
    for(int i = __lg(x); i >= 0; --i) {
        if (x & (1ll << i)) { res += (1ll << i); }
    }
    int q = __builtin_popcountll(x);
    res += n - q;
    res += ((n-q)&1);
    cout << res << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("palindrome.in", "r", stdin);
    freopen("palindrome.out", "w", stdout);
    */
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
