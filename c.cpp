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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> res(n, 0);
        for (int i = 0; i < n; i++) {
            res[i] = (n+1)-a[i];
        }
        
        int g = 0;
        for (int i = 0; i < n; i++) {
            if (res[i]==n) {
                g = i;
            }
        }
        
        vector<pair<int, int>> gg;
        gg.push_back({n, g});
        
        for (int i = 0; i < n; i++) {
            if (i%2 != g%2) {
                gg.push_back({res[i], i});
            }
        }
        
        sort(gg.rbegin(), gg.rend());
        for (int i = 1; i < gg.size(); i++) {
            res[gg[i].second] = gg[i-1].first;
        }
        
        res[gg[0].second] = gg[gg.size()-1].first;
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
