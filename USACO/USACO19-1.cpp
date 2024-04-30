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
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    int a, b, c; cin >> a >> b >> c;
    int l = (b - a - 1), r = (c - b - 1);
    if(l == 0 && r == 0){
        cout << "0" << '\n';
    }
    else if(l == 1 || r == 1) {
        cout << "1" << endl; 
    } else {
        cout << "2" << endl;
    }
    cout << max(l, r) << endl;
    return 0;
}
