#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
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
    int res = 0;
    int i = 0;
    int j = 0;

    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    int sum = a[0];
    sort(all(a));

    while (i<n && j <n) {
        if (sum==x) {
            res++;
        }
        if (sum > x) {
            i++;
            continue;
        }
        if (sum < x) {
            i++;
            continue;
        }
    }

    cout << sum << endl;
    return 0;
}
