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
    /*
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    */
    /*
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int res = 1;
        int g = 0;
        for(int i = 1 ; i < s.length(); i++) {
            if(s[i]==s[i-1]) {
                continue;
            }
            res++;
            if(s[i-1]=='0'&&s[i]=='1') {
                g=1;
            }
        }
        res-=g;
        cout << res << endl;
    }
    return 0;
}
