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
        int n, m; cin >> n >> m;
        string a[n];
        frr(i, 0, n-1) {
            cin >> a[i];
        }
        vi cntx(n, 0);
        vi cnty(m, 0);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if (a[i][j]=='#') {
                    cntx[i]++;
                }
            }
        }
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if (a[j][i]=='#') {
                    cnty[i]++;
                }
            }
        }
        int x1, y1;
        int x2, y2;
        for(int i = 0; i < n; i++) {
            if (cntx[i]==1) {
                x1=i+1;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--) {
            if (cntx[i]==1) {
                x2=i+1;
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            if (cnty[i]==1) {
                y1=i+1;
                break;
            }
        }
        for(int i = m-1; i >= 0; i--) {
            if (cnty[i]==1) {
                y2=i+1;
                break;
            }
        }
        if (x1==x2) {
            cout << x1 << " " << y1 << endl;
            continue;
        }
        //printf("(%d, %d), (%d, %d)\n", x1, y1, x2, y2);
        cout << (x1+x2)/2 << " " << (y1+y2)/2 << endl;
    }
    return 0;
}
