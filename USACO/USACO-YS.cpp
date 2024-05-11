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

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q; cin >> n >> q;
    int a[n];
    int pref[n+1];
    pref[0]=0; // dummy index
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i-1]+a[i];
    }
    int res[q];
    for(int i = 0; i < q; i++) {
        int x, y; cin >> x >> y;
        res[i] = pref[y]-pref[x];
    }
    for(int i = 0; i < q; i++) {
        cout << res[i] << "\n";
    }
    return 0;
}
