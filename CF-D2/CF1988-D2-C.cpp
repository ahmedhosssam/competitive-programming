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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
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
        int n; cin >> n;
        set<int> s;
        for (int i = n; i >= 1; i--) {
            for (int j = n; j >= 1; j--) {
                int x = j|i;
                if (x==n) {
                    s.insert(i);
                    s.insert(j);
                    //cout << i << " " << j << " | ";
                }
            }
        }
        cout << s.size() << endl;
        for (auto it = s.begin(); it != s.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
