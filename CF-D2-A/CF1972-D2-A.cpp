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
        vector<int> a(n);
        vector<int> b(n);
        int res = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for(int i = 0 ;i < n; i++) {
            if(a[i]>b[i]) {
                res++;
                for (int j = n-1; j > i; j--) {
                    a[j] = a[j-1];
                }
                a[i]=1;
                i=0;
            }
        }
        cout << res << endl;
    }
    return 0;
}
