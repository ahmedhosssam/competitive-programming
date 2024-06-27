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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

char contained(int xi, int yi, int xj, int yj) {
    int fi = xi-yi;
    int fj = xj-yj;
    int si = yi+xi;
    int sj = yj+xj;
    if (fi>=fj&&si<=sj) {
        return 'F';
    }
    if (fi<=fj&&si>=sj) {
        return 'S';
    }
    return '0';
}

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("mountains.in", "r", stdin);
    freopen("mountains.out", "w", stdout);
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0 ; i < n; i++) {
        cin >> a[i].S >> a[i].F;
    }
    sort(rall(a));
    int res = n;
    vi vis(n, 0);
    for(int i = 0; i < n; i++) {
        if (vis[i]) {
            continue;
        }
        for(int j = i+1; j < n; j++) {
            if (vis[j]) {
                continue;
            }
            if (contained(a[i].S, a[i].F, a[j].S, a[j].F)=='F') {
                res--;
                vis[i]=1;
                break;
                //printf("(%d, %d)  (%d, %d)", a[i].S, a[i].F, a[j].S, a[j].F);
            }
            if (contained(a[i].S, a[i].F, a[j].S, a[j].F)=='S') {
                res--;
                vis[j]=1;
                //printf("(%d, %d)  (%d, %d)", a[i].S, a[i].F, a[j].S, a[j].F);
            }
        }
    }
    cout << res << endl;
    return 0;
}
