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
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n; cin >> n;
    vector<vector<int>> a;
    for(int i=0; i < n; i++) {
        vector<int> g(3);
        cin >> g[0] >> g[1] >> g[2];
        a.pb(g);
    }

    int res = 0;
    vector<int> balls(4, 0);
    for(int j = 1; j <= 3; j++) {
        int ss = 0;
        balls[1]=0;
        balls[2]=0;
        balls[3]=0;
        balls[j]=1;
        for(int i = 0; i < n; i++) {
            swap(balls[a[i][0]], balls[a[i][1]]);
            if(balls[a[i][2]]) {
                ss++;
            }
        }
        res = max(res, ss);
    }
    cout << res << endl;
    return 0;
}
