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
        int a, b, c, d; cin >> a >> b >> c >> d;
        bool g1, g2;
        g1=false;
        g2=false;
        int mx = max(a, b);
        a = min(a, b);
        b=mx;
        for(int i = a; i <= b; i++) {
            if (c==i) {
                g1=true;
            } 
            if (d==i) {
                g2=true;
            }
        }
        if((g1&&g2) || (!g1&&!g2)) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
