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

/*

    int mx = max({x1, y1, x2, y2, x3, y3});
    for(int i = 0; i < mn; i++) {
        
    }

    BBBBBB
    BBBBBB
    AAAACC
    AAAACC
    AAAACC
    AAAACC
*/

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    vector<pair<pair<int, int>, char>> g;
    g.pb({{y1, x1}, 'A'});
    g.pb({{y2, x2}, 'B'});
    g.pb({{y3, x3}, 'C'});
    sort(g.begin(), g.end(), [](const pair<pair<int, int>, char>& a, const pair<pair<int, int>, char>& b) {
        return a.first.first > b.first.first;
    });

    int mx = max({x1, y1, x2, y2, x3, y3});
    char a[mx][mx] = {'X'};
    for (int i = 0; i < mx; i++) {
        for (int j = 0; j < mx; j++) {
            a[j][i]='X';
        }
    }
    for (int i = 0; i < g[0].F.F; i++) {
        for (int j = 0; j < g[0].F.S; j++) {
            a[j][i]=g[0].S;
        }
    }
    int x = g[1].F.S;
    int y = g[1].F.F;
    int t = x*y;
    for (int i = 0; i < mx; i++) {
        for (int j = 0; j < mx ; j++) {
            if (t==0) {
                break;
            }
            if (a[j][i]=='X') {
                a[j][i]=g[1].S;
            }
            t--;
        }
    }
    x = g[2].F.S;
    y = g[2].F.F;
    t = x*y;
    for (int i = 0; i < mx; i++) {
        for (int j = 0; j < mx ; j++) {
            if (t==0) {
                break;
            }
            if (a[j][i]=='X') {
                a[j][i]=g[2].S;
            }
            t--;
        }
    }
    for (int i = 0; i < mx; i++) {
        for (int j = 0; j < mx; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
