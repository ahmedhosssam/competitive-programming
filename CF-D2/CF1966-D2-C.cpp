#include <bits/stdc++.h>
using namespace std;

#define int long long

// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int mx = a[n-1];
        int g = 1;
        for(int x: a) {
            if (x==g) {
                g++;
            }
        }
        if(g>mx) {
            if(mx%2==1) {
                cout << "Alice\n";
            } else {
                cout << "Bob\n";
            }
        } else {
            if(g%2==1) {
                cout << "Alice\n";
            } else {
                cout << "Bob\n";
            }
        }
    }
    return 0;
}
