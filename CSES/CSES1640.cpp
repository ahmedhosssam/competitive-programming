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

vector<int> a;

void two_sum(int n, int x) {
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
        return;
    }
    while (i<j) {
        s = a[i]+a[j];
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
        cout << mp[a[i]][0] << " " << mp[a[j]][mp[a[j]].size()-1] << endl;
    } else {
        cout << "IMPOSSIBLE\n";
    }
}

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int n; cin >> n;
    int sum; cin >> sum;
    a = vector<int>(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    two_sum(n, sum);
    return 0;
}
