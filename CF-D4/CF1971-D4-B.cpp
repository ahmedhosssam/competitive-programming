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
    /*
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.length();
        int g = -1;
        char ch=s[0];
        bool ok = false;
        
        for(int i = 1; i < n; i++) {
            if(s[i]!=ch) {
                ok = true;
                g = i;
                break;
            }
        }
        if(!ok) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << s[g];
            for(int i = 0; i < n; i++) {
                if(i==g) {
                    continue;
                }
                cout << s[i];
            }
            cout << "\n";
        }
    }
    return 0;
}
