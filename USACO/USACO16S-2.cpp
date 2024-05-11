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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    int n; cin >> n;
    int mod[n+1];
    int pref[55000];
    int mx = 0;
    pref[0]=0;
    int x;
    for(int i = 1 ; i <= n; i++) {
        cin >> x;
        pref[i]=pref[i-1]+x;
        mod[i]=pref[i]%7;
    }
    for(int i = 1 ; i <= n; i++) {
        bool ok = false;
        for(int j = n ; j > 0; j--) {
            if(mod[i]==mod[j]) {
                if((j-i)>mx) {
                    mx = j-i;
                } else {
                    ok = true;
                    break;
                }
                //mx= max(mx, j-i);
            }
        }
    }
    cout << mx << "\n";
    return 0;
}
