#include <bits/stdc++.h>
using namespace std;

#define int long long

// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        int first_col = 0;
        int last_col = 0;
        int first_row = 0;
        int last_row = 0;
        bool ok1 = false;
        for (int i = 0; i < m; i++) {
            // first col && last col
            if(s[0][i]=='B') {
                first_col=1;
            }
            if(s[n-1][i]=='B') {
                last_col=1;
            }
        }
        for (int i = 0; i < n; i++) {
            // first row && last row
            if(s[i][0]=='B') {
                first_row=1;
            }
            if(s[i][m-1]=='B') {
                last_row=1;
            }
        }
        if(first_col&&last_col&&first_row&&last_row) {
            cout << "YES\n";
            continue;
        }
        first_col = 0;
        last_col = 0;
        first_row = 0;
        last_row = 0;
        for (int i = 0; i < m; i++) {
            // first col && last col
            if(s[0][i]=='W') {
                first_col=1;
            }
            if(s[n-1][i]=='W') {
                last_col=1;
            }
        }
        for (int i = 0; i < n; i++) {
            // first row && last row
            if(s[i][0]=='W') {
                first_row=1;
            }
            if(s[i][m-1]=='W') {
                last_row=1;
            }
        }
        if(first_col&&last_col&&first_row&&last_row) {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}
