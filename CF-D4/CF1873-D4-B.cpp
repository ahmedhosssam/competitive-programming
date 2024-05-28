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
        vector<int> a(n);
        frr(i, 0, n-1) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        /*
        if(a[a.size()-1]==0 && a.size()>1) {
            cout << 0 << endl;
            continue;
        }
        */
        a[0]++;
        int res = 1;
        for(int i =0 ; i < n; i++) {
            res*=a[i];
        }
        cout << res << endl;
    }
    return 0;
}
