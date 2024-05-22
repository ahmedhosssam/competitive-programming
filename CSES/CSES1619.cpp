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
    vector<int> a;
    vector<int> l;
    vector<char> arr;
    for(int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        a.pb(x);
        l.pb(y);
    }
    sort(a.begin(), a.end());
    sort(l.begin(), l.end());
    int i = 0;
    int j = 0;
    while(i < n && j < n) {
        if(a[i]<l[j]) {
            arr.pb('A');
            i++;
        } else {
            arr.pb('L');
            j++;
        }
    }
    //cout << i << " -- " << j << endl;
    while(i<n) {
        arr.pb('A');
        i++;
    }
    while(j<n) {
        arr.pb('L');
        j++;
    }
    int no = 0;
    int res = 0;
    //cout << arr.size() << endl;
    /*
    for(int i = 0 ;i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    */
    for(int i = 0 ;i < 2*n; i++) {
        if(arr[i]=='A') {
            no++;
        } else {
            no--;
        }
        res = max(res, no);
    }
    cout << res << endl;
    return 0;
}
