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
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int res = 0;
        char cur = ' ';
        
        for (int i = 0; i < n; i++) {
            char gg;
            if (s[i] == 'R') {
                gg = 'P';
            } else if (s[i] == 'P') {
                gg = 'S';
            } else {
                gg = 'R';
            }

            if (gg == cur) {
                if (gg == 'R'){ 
                    gg = 'P';
                } else if (gg == 'P') {
                    gg = 'S';
                } else {
                    gg = 'R';
                }
            }

            if ((gg == 'R' && s[i] == 'S') || (gg == 'P' && s[i] == 'R') || (gg == 'S' && s[i] == 'P')) {
                res++;
            }
            cur = gg;
        }

        cout << res << endl;
    }

    return 0;
}
