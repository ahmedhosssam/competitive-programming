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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        double d, h; cin >> d >> h;
        double area = 0.5*d*h;
        double a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        double res = area*n;
        for(int i = 0; i < n-1; i++) {
            double diff = a[i+1]-a[i];
            if (diff<h) {
                double d2 = diff/h;
                res -= (0.5*(h-diff)*(d-d*d2));
            } 
        }
        printf("%.7f\n", res);
    }
    return 0;
}
