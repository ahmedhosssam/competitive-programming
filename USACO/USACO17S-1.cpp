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
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);
    int n, k, b; cin >> n >> k >> b;
    int a[n+1] = {0};
    int x;
    for(int i = 1; i <= b; i++) {
        cin >> x;
        a[x]=1;
    }
    for(int i = 1; i <= n; i++) {
        a[i]+=a[i-1];
    }
    int res = 9999999;
    for(int i = k; i <= n; i++) {
        res = min(res, a[i]-a[i-k]);
    }
    cout << res << endl;
    return 0;
}
