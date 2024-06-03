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
#define YES cout << "YES\n";
#define NO cout << "NO\n";

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
        int n, f, k; cin >> n >> f >> k;
        vector<int> a(n);
        for(int i = 0 ;i < n; i++) {
            cin >> a[i];
        }
        f--;
        int fav = a[f];
        int freq = 0;
        bool ok = false;
        sort(a.rbegin(), a.rend());
        for(int i = 0; i < k; i++) {
            if (a[i]==fav) {
                ok = true;
            }
        }
        for(int i = k;i < n; i++) {
            if(a[i]==fav) {
                freq++;
            }
        }
        if (ok && freq==0) {
            YES;
        } else if (ok && freq>0) {
            cout << "MAYBE\n";
        } else {
            NO;
        }
    }
    return 0;
}
