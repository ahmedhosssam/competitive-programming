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
    //freopen("test.in", "r", stdin);
    /*
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int res = 0;
        string s; cin >> s;
        int sum  = 0;
        map<int, int> mp;
        mp[0]=1;

        for(int i = 0; i < n; i++) {
            sum += (s[i]-'0');
            int x = sum - i - 1;
            mp[x]++;
            res += mp[x]-1;
        }
        cout << res << endl;
    }
    return 0;
}
