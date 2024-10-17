#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int n; cin >> n;
    string a[n];
    string b[n];
    for( int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for( int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for( int i = 0; i < n; i++) {
        for( int j = 0; j < a[0].length(); j++) {
            if(a[i][j]!=b[i][j]) {
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }

    return 0;
}
