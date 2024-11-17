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
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        // find two numbers --> (x*y)+2==k
        int n; cin >> n;
        vi a(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int x = -1;
        int y = -1;
        int g = n-2;
        for(int i = 0 ; i < n ; i++) {
            int Y = g/a[i];
            if (mp[Y]==1 && ((a[i]*Y)+2)==n) {
                x=a[i];
                y=Y;
                break;
            }
            mp[a[i]]=1;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
