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
    int n, m, r; cin >> n >> m >> r;
    vi cows(n);
    vector<pair<int, int>> buy;
    vector<int> rent(r);
    for(int i = 0 ; i < n ; i++) {
        cin >> cows[i];
    }
    for(int i = 0 ; i < m ; i++) {
        int x, y; cin >> x >> y;
        buy.pb({y, x});
    }
    for(int i = 0 ; i < r ; i++) {
        cin >> rent[i];
    }
    sort(rall(cows));
    sort(all(buy));
    sort(all(rent));
    int res = 0;
    for(int i = 0; i < n; i++) {
        if (min(buy[buy.size()].S, cows[i])*buy[buy.size()].F > rent[rent.size()]) {
            res += buy[buy.size()].F * min(buy[buy.size()].S, cows[i]);
            cows[i] -= min(buy[buy.size()].S, cows[i]);
            buy[buy.size()].S -= min(buy[buy.size()].S, cows[i]);
            if (buy[buy.size()].S<=0) {
                buy.pop_back();
            }
        } else {
            res += rent[rent.size()];
            cows[i]=0;
            rent.pop_back();
        }
        if (cows[i]>0) {
            i = max(0, i-1);
        }
    }
    cout << res << endl;
    return 0;
}
