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
    int n; cin >> n;
    vector<int> a(n, 0);
    vector<int> g(n, 0);
    frr(i, 0, n-1) {
        cin >> a[i];
        g[i]=a[i];
    }
    sort(g.begin(), g.end());
    int res = 0;
    frr(i, 0, n-1) {
        if(a[i]!=g[i]) {
            res++;
        }
    }
    cout << max(0LL, res-1) << endl;
    return 0;
}
