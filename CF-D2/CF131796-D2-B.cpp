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
#define rall(x) (x).rbegin(), (x).rend()
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
        int n; cin >> n;
        vi a(n-1);
        vi res(n);
        for(int i = 0; i < n-1; i++) {
            cin >> a[i];
        }
        res[0]=a[0];
        res[n-1] = a[n-2];
        bool ok = true;
        for(int i = 1; i < n-1; i++) {
            res[i] = a[i-1]|a[i];
        }
        for(int i = 1; i < n; i++) {
            if ((res[i-1]&res[i]) != a[i-1]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            Print(res);
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
