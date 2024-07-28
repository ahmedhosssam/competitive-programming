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

// The operation: (a[0] + a[1])/2
// Assuming the array is sorted

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
        vi a(n);
        vi ans;
        for(int i = 0 ;i < n; i++) {
            cin >> a[i];
        }
        sort(all(a));
        int g = 0;
        while (g<40) {
            sort(all(a));
            int A = a[n-1];
            int B = a[0];
            int x = (A+B)/2;
            if (x==0) {
                break;
            }
            ans.pb(x);
            for(int i = 0; i < n; i++) {
                a[i]= abs(a[i]-x);
            }
            //Print(a);
            //cout << endl;
            g++;
        }
        sort(all(a));
        if(a[n-1]!=0) {
            cout << -1 << endl;
        } else {
            cout << ans.size() << endl;
            Print(ans);
            cout << endl;
        }
    }
    return 0;
}
