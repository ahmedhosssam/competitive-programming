#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";} cout << endl;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int sum = 0;
        for(int i = 0; i < s.length(); i++) {
            if (s[i]=='2') {
                sum+=4;
                continue;
            }
            if (s[i]=='3') {
                sum+=9;
                continue;
            }
            sum += (s[i]-'0');
        }
        if (sum%9==0) {
            YES
        } else {
            NO
        }
    }
    return 0;
}
