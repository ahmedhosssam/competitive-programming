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

// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int m; cin >> m;
        vi a(n);
        vi b(m);
        for(int i = 0 ; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0 ; i < m; i++) {
            cin >> b[i];
        }
        if(n<4 || m<4 || (n+m)<11) {
            cout << "-1\n";
            continue;
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        int sum = 0;
        for(int i = 0 ; i < 4; i++) {
            sum+=a[i];
        }
        for(int i = 0 ; i < 4; i++) {
            sum+=b[i];
        }
        int g = 3;
        int i = 4;
        int j = 4;
        while(g--) {
            if(i>= 0 && j >= 0) {
                if(a[i]>b[j]) {
                    sum+=a[i];
                    i++;
                } else {
                    sum+=b[j];
                    j++;
                }
            }
            if(j>=m) {
                sum+=a[i];
                i++;
            } else if(i>=n) {
                sum+=b[j];
                j++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
