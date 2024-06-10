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
    /*
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    // A faster CPE to do prefix sum
    int n; cin >> n;
    vector<int> a(n);
    vector<int> p(n);
    for(int i = 0 ; i < n; i++) {
        cin >> a[i];
    }
    int i;
    p[0]=a[0];
    for(i = 1; i < n-1; i+=2) {
        int mid_val = p[i-1]+a[i];
        p[i] = mid_val;
        p[i+1] = mid_val + a[i+1];
    }
    // for even elements, finish the last element
    if (i < n) {
        p[i] = p[i-1] + a[i];
    }
    for(int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}
