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

/*
    << Hoof, paper, sissors >>
    S --> H
    P --> S
    H --> P
*/

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    int n; cin >> n;
    int res = 0;
    int s[n+1]= {0};
    int h[n+1]= {0};
    int p[n+1]= {0};
    char ch;
    for (int i = 1; i <= n;i++) {
        s[i]+=s[i-1];
        p[i]+=p[i-1];
        h[i]+=h[i-1];
        cin >> ch;
        if(ch=='S') {
            s[i]++;
        } else if (ch=='P') {
            p[i]++;
        } else {
            h[i]++;
        }
    }
    for(int i = 0; i <= n; i++) {
        int cur = max({s[i], p[i], h[i]})+max({s[n]-s[i], p[n]-p[i], h[n]-h[i]});
        res = max(res, cur);
    }
    cout << res << "\n";
    return 0;
}
