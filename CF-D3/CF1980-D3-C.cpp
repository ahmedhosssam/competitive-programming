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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        vector<int> b(n);
        for(int i = 0 ;i < n ; i++) {
            cin >> a[i];
        }
        for(int i = 0 ;i < n ; i++) {
            cin >> b[i];
        }
        int M; cin >> M;
        int m[M];
        for(int i = 0 ; i < M; i++) {
            cin >> m[i];
        }
        /*
        if(find(b.begin(),b.end(),m[M-1])==b.end()) {
            cout << "NO\n";
            continue;
        }
        */
        map<int, int> mpa;
        map<int, int> mpb;
        map<int, int> mpm;
        for(int i = 0 ; i < n ; i++) {
            mpa[a[i]]++;
            mpb[b[i]]++;
        }
        for(int i = 0 ; i < M ; i++) {
            mpm[m[i]]++;
        }
        bool ok = true;
        for(int i = 0; i < n; i++) {
            if (a[i]!=b[i]) {
                if (mpm[b[i]]>0) {
                    a[i]=b[i];
                    mpm[b[i]]--;
                } else {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            YES;
        } else {
            NO;
        }
    }
    return 0;
}
