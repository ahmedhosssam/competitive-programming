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

// x.x
// ...

// ...
// x.x
 
// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s[2];
        cin >> s[0] >> s[1];
        int res = 0;
        for (int i = 0 ; i < n-2; i++) {
            if (s[0][i]=='x'&&s[0][i+1]=='.'&&s[0][i+2]=='x'&&s[1][i]=='.'&&s[1][i+1]=='.'&&s[1][i+2]=='.') {
                res++;
            }
        }
        for (int i = 0 ; i < n-2; i++) {
            if (s[1][i]=='x'&&s[1][i+1]=='.'&&s[1][i+2]=='x'&&s[0][i]=='.'&&s[0][i+1]=='.'&&s[0][i+2]=='.') {
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
