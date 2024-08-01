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
        int n; cin >> n;
        string s; cin >> s;
        s[0]='(';
        s[n-1]=')';
        int res = 0;
        for (int i = 1; i < n-1; i++) {
            if (s[i] == '_') {
                // )...
                if (s[i-1] == ')') {
                    s[i] = '(';
                } else {
                    s[i] = ')';
                }
            }
        }
        //cout << s << endl;
        stack<int> st;
        vector<pair<int, int>> resa;
        for(int i = 0; i < n; i++) {
            if (s[i]=='(') {
                st.push(i);
            } else {
                if (!st.empty()) {
                    resa.pb({i, st.top()});
                    st.pop();
                }
            }
        }
        for(int i = 0; i < resa.size(); i++) {
            res += abs(resa[i].F-resa[i].S);
        }
        cout << res << endl;
    }
    return 0;
}
