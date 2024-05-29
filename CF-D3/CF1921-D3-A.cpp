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
        vector<pair<int, int>> a(4);
        cin >> a[0].F >> a[0].S;
        cin >> a[1].F >> a[1].S;
        cin >> a[2].F >> a[2].S;
        cin >> a[3].F >> a[3].S;
        sort(a.begin(), a.end());

        int x;
        int y;
        if (a[0].F==a[1].F) {
            x = abs(a[0].S-a[1].S);
        } else {
            x = abs(a[0].F-a[1].F);
        }
        if (a[2].F==a[3].F) {
            y = abs(a[2].S-a[3].S);
        } else {
            y = abs(a[2].F-a[3].F);
        }
        cout << x*y << endl;
    }
    return 0;
}
