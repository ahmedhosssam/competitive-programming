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
    int n; cin >> n;
    int a[n];
    int b[n];
    for(int i = 0 ;i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0 ;i < n; i++) {
        cin >> b[i];
    }
    int mx = INT_MIN;
    for(int i = 0;i < n; i++) {
        int x = a[i];
        int y = b[i];
        for(int j = 0; j < n; j++) {
            mx = max(mx, (int)(pow(x-a[j], 2)+pow(y-b[j], 2)));
        }
    }
    cout << mx << endl;
    return 0;
}
