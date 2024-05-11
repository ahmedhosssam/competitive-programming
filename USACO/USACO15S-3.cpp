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
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    int n, q; cin >> n >> q;
    int a[n+1];
    int pref1[n+1] = {0}; 
    int pref2[n+1] = {0};
    int pref3[n+1] = {0};
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        pref1[i]=pref1[i-1]; 
        pref2[i]=pref2[i-1]; 
        pref3[i]=pref3[i-1]; 
        if(a[i]==1) {
            pref1[i]++;
        } else if (a[i]==2) {
            pref2[i]++;
        } else if (a[i]==3) {
            pref3[i]++;
        }
    }
    /*
    for(int i = 0; i <= n; i++) {
        cout << pref1[i] << " ";
    }
    cout << "\n";
    for(int i = 0; i <= n; i++) {
        cout << pref2[i] << " ";
    }
    cout << "\n";
    for(int i = 0; i <= n; i++) {
        cout << pref3[i] << " ";
    }
    cout << "\n";
*/
    for(int i = 0; i < q; i++) {
        int x, y; cin >> x >> y;
        cout << pref1[y]-pref1[x-1] << " ";
        cout << pref2[y]-pref2[x-1] << " ";
        cout << pref3[y]-pref3[x-1];
        cout << "\n";
    }
    return 0;
}
