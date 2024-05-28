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
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n, m; cin >> n >> m;
    int a[500] = {0};
    int b[500] = {0};
    int res = 0;
    int x = 1;
    int g = 0;
    int s = 0;
    while (n--) {
        cin >> g >> s;
        for(int i = x; i <= g+x; i++) {
            a[i]=s;
        }
        x+=g;
    }
    x = 1;
    while (m--) {
        cin >> g >> s;
        for(int i = x; i <= g+x; i++) {
            b[i]=s;
        }
        x+=g;
    }
    for(int i = 1; i <= 100; i++) {
        if(b[i]>a[i]) {
            res = max(res, b[i]-a[i]);
        }
    }
    cout << res << endl;
    return 0;
}
