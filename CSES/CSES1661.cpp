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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x; cin >> n >> x;
    map<int, int> mp;
    int a[n];
    for(int i = 0 ; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    int res = 0;
    mp[0]++;
    for(int i = 0 ; i < n; i++) {
        sum+=a[i];
        res+=mp[sum-x];
        mp[sum]++;
    }
    //cout << "\n";
    cout << res << "\n";
    return 0;
}
