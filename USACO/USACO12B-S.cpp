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
    int n, k; cin >> n >> k;
    int a[n+1] = {0};
    for(int i = 0 ; i < k; i++) {
        int x, y; cin >> x >> y;
        x--;
        y--;
        a[x]++;
        a[y]--;
    }
    // O(n) (not sure)
    for(int i = 0 ; i < n; i++) {
        if(a[i]) {
            for(int j = i+1; j < n; j++) {
                if(a[j]) {
                    break;
                }
                a[j]++;
            }
        }
    }
    // O(n), good
    // using Difference Array
    /*
    for(int i=1; i<n; i++) {
        a[i] += a[i-1];
    }
    sort(a, a+n);
    /*
    for(int i = 0 ; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    */
    cout << a[(n-1)/2] << endl;
    return 0;
}
