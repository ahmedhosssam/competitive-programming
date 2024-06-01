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
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    */
    int c1, m1; cin >> c1 >> m1;
    int c2, m2; cin >> c2 >> m2;
    int c3, m3; cin >> c3 >> m3;
    int x = 3;
    int a[3];
    int mx[3];
    mx[0]=c1;
    mx[1]=c2;
    mx[2]=c3;
    a[0]=m1;
    a[1]=m2;
    a[2]=m3;
    for(int i = 0; i < 100; i++) {
        int i1 = i%x;
        int i2 = (i+1)%x;
        if(a[i1]+a[i2]<=mx[i2]) {
            a[i2]+=a[i1];
            a[i1]=0;
        } else {
            a[i1]-=(mx[i2]-a[i2]);
            a[i2]=mx[i2];
        }
    }
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    return 0;
}
