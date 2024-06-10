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
    string s; cin >> s;
    sort(s.begin(), s.end());
    vector<string> a;
    do {
        a.pb(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << a.size() << endl;
    for(int i = 0 ; i < a.size(); i++) {
        cout << a[i] << endl;
    }
    return 0;
}
