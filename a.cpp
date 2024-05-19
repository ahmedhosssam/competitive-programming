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
    /*
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        int res = 0;
        if (max({a, b, c})==0 ){
            cout << 0 << endl;
            continue;
        }
        if(a==b&&b==c&&c==a) {
            cout << -1 << endl;
            continue;
        }
        if (a!=0||b!=0) {
            res += min(a, b);
        }
        if (b!=0||c!=0) {
            res += min(b, c);
        }
        if (c!=0||a!=0) {
            res += min(c, a);
        }
        cout << res << endl;
    }
    return 0;
}
