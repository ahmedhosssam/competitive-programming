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
        vector<int> a(n);
        frr(i, 0, n-1) {
            cin >> a[i];
        }
        /*
        sort(a.rbegin(), a.rend());
        cout << a[0]+a[1] << endl;
        */
        int mx1 = a[n-1];
        int mx2 = a[0];
        for(int i = 0; i < n-1 ;i++) {
            mx2=max(mx2, a[i]);
        }
        cout << mx1+mx2 << endl;
    }
    return 0;
}
