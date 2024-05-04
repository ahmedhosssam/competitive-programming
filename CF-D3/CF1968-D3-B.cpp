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
        int m; cin >> m;
        string a, b; cin >> a >> b;
        int res = 0;
        int g = 0;
        for(int i = 0;i < m &&g < n; i++) {
            if (b[i]==a[g]) {
                res++;
                g++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
