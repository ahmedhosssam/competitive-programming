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
    int n; cin >> n;
    n*=2;
    vi a(n);
    for(int i = 0 ;i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int res = INT_MAX;
    for(int k = 0; k < n; k++) {
        for(int j = k+1; j < n; j++) {
            vi b;
            for(int i = 0; i < n; i++) {
                if (i!=j&&i!=k) {
                    b.pb(a[i]);
                }
            }
            int x = 0;
            for(int i = 0 ;i < n-2; i+=2) {
                x += abs(b[i]-b[i+1]);
            }
            res = min(res, x);
        }
    }
    cout << res << endl;
    return 0;
}
