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
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";}
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

vector<int> arr;

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    int n; cin >> n;
    arr = vector<int>(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    int mn = INT_MAX;
    for(int i = 0; i < (1<<n); i++) {
        int s1 = 0;
        int s2 = 0;
        for(int j = 0; j < n; j++) {
            if (i&(1<<j)) {
                s1+=arr[j];
            } else {
                s2+=arr[j];
            }
        }
        mn = min(abs(s1-s2), mn);
    }
for (int b = 0; b < (1<<n); b++) {
    vector<int> subset;
    for (int i = 0; i < n; i++) {
        if (b&(1<<i)) subset.push_back(i);
    }
}

    cout << mn << endl;
    return 0;
}
