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
    int n, x; cin >> n >> x;
    vector<pair<int, int>> a;
    for(int i = 0; i < n; i++) {
        int g;
        cin >> g;
        a.pb({g, i+1});
    }
    sort(all(a));
    bool ok = false;
    for(int i = 0 ; i < n; i++) {
        if (ok)
            break;
        int j, k;
        j = 0;
        k = n-1;
        int target = x - a[i].F;
        while (j!=k) {
            if (j!=i && k!=i && a[j].F+a[k].F==target) {
                cout << a[i].S << " " << a[j].S << " " << a[k].S;
                ok = true;
                break;
            }
            if (a[j].F+a[k].F < target) {
                j++;
            } else {
                k--;
            }
        }
    }
    if (!ok) {
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}
