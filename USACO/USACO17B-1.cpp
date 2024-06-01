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
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int x, y; cin >> x >> y;
    int g = 1;
    int gg = true;
    while(x!=y) {
        if(gg) {
            x+=g;
        } else {
            x-=g;
        }
        gg=!gg;
        g*=2;
    }
    cout << g+1 << endl;
    return 0;
}
