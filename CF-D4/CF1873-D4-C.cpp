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
        string s[10];
        string gg[10] = {"1111111111", "1222222221", "1233333321", "1234444321", "1234554321", "1234554321", "1234444321", "1233333321", "1222222221", "1111111111"};
        for(int i =0 ;i < 10; i++) {
            cin >> s[i];
        }
        int res = 0;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                if(s[i][j]=='X') {
                    res+= (gg[i][j]-'0');
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
