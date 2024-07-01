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
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int n, m; cin >> n >> m;
    multiset<int> s;
    vi a(n);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        s.insert(x);
    }
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        if (s.empty()) {
            cout << -1 << endl;
            continue;
        }
        if (s.size()==1) {
            if (*s.begin()<=a[i]) {
                cout << *s.begin() << endl;
                s.erase(*s.begin());
            } else {
                cout << -1 << endl;
            }
            continue;
        }
        if (s.count(a[i])) {
            cout << a[i] << endl;
            s.erase(s.find(a[i]));
            //s.erase(a[i]); // we should handle the duplicate, to not remove all, but for now we will stick with this
            continue;
        }
        auto it = s.lower_bound(a[i]);
        while (s.find(*it)==s.end()) {
            it--;
        }
        while (*it > a[i]) {
            if (it==s.begin()) {
                break;
            }
            it--;
        }
        if (*it <= a[i]) {
            if (s.find(*it) != s.end()) {
                cout << *it << endl;
                s.erase(s.find(*it));
            } else {
                cout << -1 << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
