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

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("cowsignal.in", "r", stdin);
    int x, y, k; cin >> x >> y >> k;
    string res[x*k];
    int g = 0;
    for(int i = 0; i < x; i++) {
        string s; cin >> s;
        string ss = "";
        for(int j = 0; j < y; j++) {
            for(int l = 0; l < k; l++) {
                ss+=s[j];
            }
        }
        for(int j = 0; j < k; j++) {
            res[g]=ss;
            g++;
        }
    }
    freopen("cowsignal.out", "w", stdout);
    for(int i = 0; i < x*k; i++) {
        cout << res[i] << endl;
    }
    return 0;
}
