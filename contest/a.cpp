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
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n; i++) {
        cin >> a[i];
    }
    int q; cin >> q;
    vi x(q, 0);
    vi y(q, 0);
    for(int i = 0 ; i < q; i++) {
        cin >> x[i];
        cin >> y[i];
    }
    for (int i = 0; i < q; i++) {
        int l = x[i];
        int r = y[i];
        int diff = INT_MAX;
        vector<int> b(a.begin()+l-1, a.begin()+r);
        /*
        for(int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        */
        sort(all(b));
        for(int i = 0; i < b.size()-1; i++) {
            diff = min(diff, abs(b[i]-b[i+1]));
        }
        cout << diff << endl;
    }
    return 0;
}
