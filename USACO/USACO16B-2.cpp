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
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    int n; cin >> n;
    int a[n];
    for(int i = 0 ;i < n ;i++) {
        cin >> a[i];
    }
    int res = INT_MAX;
    for(int i = 0 ; i < n ;i++) {
        int g = 0;
        int x= 0;
        for(int j = i ; j < n+i ; j++) {
            g += (a[j%n])*x;
            x++;
        }
        res = min(res, g);
    }
    cout << res << endl;
    return 0;
}
