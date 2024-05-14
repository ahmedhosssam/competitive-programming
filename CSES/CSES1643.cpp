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
    int n; cin >> n;
    int a[n];
    int pref[n+1] = {0};
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++) {
        pref[i]= pref[i-1]+a[i-1];
    }
    int res = INT_MIN;
    int mx = pref[1];
    int mn = pref[0];
    for(int i = 1; i <= n; i++) {
        mx = max(mx, pref[i]-mn);
        mn = min(mn, pref[i]);
    }
    cout << mx << endl;
    return 0;
}
