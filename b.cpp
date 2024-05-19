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
        int n; cin >> n;
        int a[n];
        vector<int> prefix(n+1, 0);
        frr(i, 0, n-1) {
            cin >> a[i];
        }
        for(int i = 0 ; i < n; i++) {
            prefix[i+1]=prefix[i]|a[i];
        }
        int res = n;
        for(int i = 1; i < n; i++) {
            bool ok = true;
            int l = prefix[i];
            for(int j = i; j <=n ;j+=i) {
                int cur = prefix[min({n, i, j})] & ~prefix[i];
                if(cur != l) {
                    ok = false;
                    break;
                }
            }
            if(ok) {
                res = i;
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}
