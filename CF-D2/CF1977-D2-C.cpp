#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
//#define int long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define frr(i, a, b) for(int i = a; i <= b; i++)
#define endl "\n"

int lcm(int a, int b) {
    return abs(a*b)/gcd(a, b);
}

bool iss(int arr[], int x, int y, int target) {
    for (int i = x; i <= y; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        int res = 0;
        frr(i, 0, n-1) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            int g = 1;
            int gg = a[i];
            for(int j = i+1; j < n; j++) {
                gg = lcm(gg, a[j]);
                if(iss(a, i, j, gg)) {
                    break;
                }
                g++;
            }
            res = max(res, g);
        }
        if(res==1) {
            cout << 0 << endl;
        } else {
            cout << res << endl;
        }
    }
    return 0;
}
