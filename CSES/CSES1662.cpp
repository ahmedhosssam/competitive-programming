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
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i< n; i++) {
        cin >> a[i];
    }
    int res = 0;
    int sum = 0;
    map<int, int> mp;
    mp[0]++;
    for(int i = 0 ; i < n; i++ ) {
        //sum += a[i];
        sum = ((sum+a[i])%n+n)%n;
        //cout << sum << " ";
        res += mp[sum];
        mp[sum]++;
    }
    cout << endl;
    cout << res << "\n";
    return 0;
}
