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
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    int n; cin >> n;
    vector<int> a(n);
    frr(i, 0, n-1) {
        cin >> a[i];
    }
    int l = 0;
    int r = 0;
    for(int i = 0; i < n-1; i++) {
        if (a[i]>a[i+1]) {
            l=i;
            r=i;
            while(a[l]>a[r+1]) {
                r++;
                if(r>=a.size()-1) {
                    break;
                }
            }
            break;
        }
    }
    reverse(a.begin()+l, a.begin()+r+1);
    /*
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    */
    if(is_sorted(a.begin(), a.end())) {
        cout << "yes\n";
        cout << l+1 << " " << r+1 << endl;
    } else {
        cout << "no\n";
    }
    return 0;
}
