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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s1; cin >> s1;
        string s2; cin >> s2;
        int x = 0;
        int y = 0;
        for(int i = 0 ;i < n; i++) {
            if (s1[i]=='1'&&s2[i]=='0') {
                x++;
            } else if (s1[i]=='0'&&s2[i]=='1') {
                y++;
            }
        }
        cout << max(x, y) << endl;
    }
    return 0;
}
