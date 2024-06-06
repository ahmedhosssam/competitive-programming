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
#define YES cout << "YES\n";
#define NO cout << "NO\n";

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
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n-1);
        for(int i = 0; i < n-1; i++) {
            b[i] = gcd(a[i], a[i+1]);
        }
        if (is_sorted(b.begin(), b.end())) {
            YES;
            continue;
        }
        bool ok = false;
        for(int i = 0; i < n-1; i++) {
            if (a[i]>a[i+1]) {
                for(int k = 0; k < 3; k++) {
                    vector<int> last;
                    for(int j = 0; j < n; j++) {
                        if (j==i+k) {
                            continue;
                        }
                        last.pb(a[j]);
                    }
                    for(int j = 0; j < n-2; j++) {
                        b[j]=gcd(last[j], last[j+1]);
                    }
                    if (is_sorted(b.begin(), b.end())) {
                        ok = true;
                        YES;
                    }
                }
                if (!ok) {
                    NO;
                }
                break;
            }
        }
    }
    return 0;
}
