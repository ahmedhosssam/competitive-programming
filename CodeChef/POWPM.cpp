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
        int res = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int g : a) {
            if(g==1) {
                res+=n;
                continue;
            }
            int p = 1;
            for(int gg : a) {
                p*=g;
                if(p>=1000000000) {
                    break;
                }
                if(p<=gg) {
                    res++;
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}
