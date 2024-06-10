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
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    int n, m; cin >> n >> m;
    vector<string> a(n);
    vector<string> b(n);
    string f = "ACGT";
    int res = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for(int i = 0; i < m; i++) {
        map<char, int> mp1;
        map<char, int> mp2;
        for(int j = 0; j < n; j++) {
            mp1[a[j][i]]++;
        }
        for(int j = 0; j < n; j++) {
            mp2[b[j][i]]++;
        }
        int ok = 1;
        for (int j = 0; j < 4; j++) {
            if (mp1[f[j]]&&mp2[f[j]]) {
                ok=0;
            }
        }
        res+=ok;
    }
    cout << res << endl;
    return 0;
}
