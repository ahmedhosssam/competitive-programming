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

// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+1];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int res = 3;
        for(int i = 1; i <= n; i++) {
            //cout << i << " -- " << a[a[i]] << endl;
            if(i==a[a[i]]) {
                res=2;
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}
