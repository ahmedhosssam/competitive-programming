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
    int n, m, k, t; cin >> n >> m >> k >> t;
    // C --> K --> G
    vector<int> p;
    map<pair<int, int>, int> mp;
    for(int i = 0; i < k; i++) {
        int a, b; cin >> a >> b;
        p.pb(a*m+b);
        mp[{a, b}]=1;
    }
    sort(all(p));
    for(int i = 0; i < t; i++) {
        int x, y; cin >> x >> y;
        if (mp[{x, y}]) {
            cout << "Waste\n";
            continue;
        }
        int g = x*m+y;
        int u = lower_bound(all(p), x*m+y)-p.end();
        g-=u;
        if (g%3==0) {
            cout << "Carrots\n";
        } else if (g%3==1) {
            cout << "Kiwis\n";
        } else if (g%3==2) {
            cout << "Grapes\n";
        }
    }
    return 0;
}
