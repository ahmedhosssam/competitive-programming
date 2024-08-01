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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int n, x; cin >> n >> x;
    vi a(n);
    for(int i = 0 ;i < n; i++) {
        cin >> a[i];
    }
    if (n==1) {
        if (a[0]<=x) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        return 0;
    }
    int s = 0;
    int i = 0;
    int j = 0;
    int res = 0;
    while (j<n && i<n) {
        int g = j-i+1;
        //cout << g << endl;
        while (j < n) {
	    s += a[j++];
	    if (s > x) {
	        s -= a[--j];
	        break;
	    }
	}
        res = max(res, abs(i-j));
        s -= a[i];
        i++;
    }
    cout << res << endl;
    return 0;
}
