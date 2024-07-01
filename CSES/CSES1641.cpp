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
    int n; cin >> n;
    int x; cin >> x;
    vi a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, vector<int>> mp;
    for(int i = 0; i < n; i++) {
        mp[a[i]].pb(i+1);
    }
    sort(all(a));
    int s = a[0]+a[n-1];
    int i = 0;
    int j = n-1;
    if (i==j) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    for(int k = 0; k < n; k++) {
        i = 0;
        j = n-2;
        while (i<j) {
            s = a[i]+a[j]+a[k];
            //cout << s << endl;
            if (s==x) {
                break;
            }
            if (s<x) {
                i++;
            }
            if (s>x) {
                j--;
            }
        }
        if (s==x) {
            //cout << a[i] << " " << a[j] << " " << a[k] << endl;
            set<int> g;
            g.insert(mp[a[i]][0]);
            g.insert(mp[a[i]][mp[a[i]].size()-1]);
            g.insert(mp[a[j]][0]);
            g.insert(mp[a[j]][mp[a[j]].size()-1]);
            g.insert(mp[a[k]][0]);
            g.insert(mp[a[k]][mp[a[k]].size()-1]);
            if (g.size()>=3) {
                int u = 0;
                for (auto o : g) {
                    cout << o << " ";
                    u++;
                    if (u==3) { break; }
                }
                return 0;
            }
        } 
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}
