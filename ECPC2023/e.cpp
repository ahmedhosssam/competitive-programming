#include <bits/stdc++.h>
using namespace std;

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

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int n, k; cin >> n >> k;
    vector<pair<int, int>> t;
    vi a(n+1, 0);
    int res = INT_MIN;
    for(int i = 0; i < k ; i++) {
        int x, y; cin >> x >> y;
        t.pb({x, y});
    }
    sort(all(t));
    for(int i = 0; i < k ; i++) {
        int x = t[i].F;
        int y = t[i].S;
        for(int j = x; j <= y ; j++) {
            a[j]=1;
        }
    }
    int g = 0;
    for(int i = 0; i < n ; i++) {
        if (a[i]) {
            g=0;
        } else {
            g++;
            res = max(res, g);
        }
    }
    cout << max(res, 0) << endl;
    return 0;
}
