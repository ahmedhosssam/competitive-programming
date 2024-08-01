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
        int n, a, b; cin >> n >> a >> b;
        int res = n*a;
        int x = 0;
         if (a>=b) {
            cout << res << endl;
            continue;
        } else if (n>(b-a)) {
            x += (b - a) * (b + a + 1) / 2;
            x += (n-(b-a))*a;
        } else {
            x += n * (2 * b - n + 1) / 2;
        }
        cout << max(res, x) << endl;
    }
    return 0;
}
