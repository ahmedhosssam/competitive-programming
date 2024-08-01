#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
//#define int long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define frr(i, a, b) for(int i = a; i <= b; i++)
#define endl "\n"

vi a;
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
        int n; cin >> n;
        a = vi(n);
        frr(i, 0, n-1) {
            cin >> a[i];
        }
        vi pref(n);
        vi suf(n);
        for(int i = 0 ;i < n; i++) {
            pref[i]=a[i]+i;
            suf[i]=a[i]-i;
        }
        for(int i = 1 ;i < n; i++) {
            pref[i]=max(pref[i], pref[i-1]);
        }
        for(int i = n-2 ;i >= 0; i--) {
            suf[i]=max(suf[i], suf[i+1]);
        }

        int res = 0;
        for(int i = 1; i < n-1; i++) {
            res = max(res, a[i]+pref[i-1]+suf[i+1]);
        }
        cout << res << endl;
    }
    return 0;
}
