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
#define frr(i, a, b) for(int i = a; i <= b; i++)
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";}
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vi a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(rall(a));
        int mx = a[0];
        for(int i = 0; i < m; i++) {
            char ch; cin >> ch;
            int l, r; cin >> l >> r;
            if (mx>=l&&mx<=r) {
                (ch=='+') ? mx++ : mx--;
            }
            cout << mx << " ";
        }
        cout << endl;
    }
    return 0;
}
