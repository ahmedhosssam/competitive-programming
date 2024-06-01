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
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n; cin >> n;
    vector<int> a(1001, 0);
    for(int i = 0 ; i < n; i++) {
        int x, y, b; cin >> x >> y >> b;
        a[x]+=b;
        a[y]-=b;
    }
    int mx = 0;
    int cr = 0;
    for(int i = 0 ; i < 1001; i++) {
        cr += a[i]; // 0, +, -
        mx = max(mx, cr); 
    }
    cout << mx << endl;
    return 0;
}
