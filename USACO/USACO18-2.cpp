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
    n, m, k
        n: total number
        m: social hierarchy
        k: demand to be milked a specific posision in the order

        6 3 2

        4 5 6

        3 1
        5 3

        3, 4, 5, 1, 6, 0
        0, 0, 0, 0, 0, 0
*/

// for (int i = 0; i < n; i++) {
int32_t main() {
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    int n, m, k; cin >> n >> m >> k;
    vector<int> social(n+1, 0);
    vector<int> a(n+1, 0);      // res
    while (m--) {
        int xx; cin >> xx;
        social[xx]=1;
    }
    vector<pair<int, int>> jj;
    while (k--) {
        int x, y; cin >> x >> y;
        a[y]=1;
        jj.pb({y, x});
    }
    if(a[1]) {
        cout << a[1] << endl;
        return 0;
    }
    sort(jj.begin(), jj.end());
    int res = 1;
    bool done = false;
    int m1 = n;
    int m2 = n;
    for (auto p : jj) {
        if(p.S==1) {
            res=p.F;
            done = true;
        }
        if(social[p.S]) {
            m1 = min(m1, p.F);  // a[]
            m2 = min(m2, p.S);  // social[]
        }
        a[p.F] = p.S;
    }
    if(done) {
        cout << res << endl;
        return 0;
    } 
    /*
        else if(social[1]) {
        cout << 1 << endl;
        return 0;
    }
    */
    m1--; m2--;
    int l = m1;
    while(m1>0) {
        if(a[l]) {
            l--;
            continue;
        }
        a[l]=1;
        m1--;
        l--;
    }
    for(int i = 1; i <= n;i++) {
        //cout << a[i] << " ";
        if(!a[i]) {
            res=i;
            break;
        }
    }
    //cout << endl;
    //cout << social[1] << "gg\n";
    cout << res << endl;
    return 0;
}
