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
#define YES cout << "YES\n";
#define NO cout << "NO\n";

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    int n; cin >> n;
    vector<string> res(n);
    int a[n];
    vector<string> id(n);
    for(int i = 0 ; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0 ; i < n; i++) {
        cin >> id[i];
    }
    for(int j = 0 ; j < 3; j++) {
        vector<string> gg(n);
        for(int i = 0 ; i < n; i++) {
            gg[i]=id[a[i]-1];
        }
        id=gg;
    }
    for(int i = 0 ; i < n; i++) {
        cout << id[i] << endl;
    }
    return 0;
}
