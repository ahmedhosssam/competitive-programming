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

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];

        int mx = 0;
        for (int i = 1; i <= n; i++) {
            a[i-1]=i;
        }
        /*
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        */
        for (int i = 1; i <= n; i++) {
            mx += abs(i-(n-i+1));
        }

        if (k>mx || k%2==1) {
            cout << "No" << endl;
            continue;
        } 

        int x = n;
        for(int i = 0; i < n; i++) {
            if (k <= (x-1)*2) {
                swap(a[i], a[i+k/2]);
                break;
            }
            k -= (x-1)*2;
            x-=2;
            swap(a[i], a[n-i-1]);
        }

        cout << "Yes" << endl;
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
