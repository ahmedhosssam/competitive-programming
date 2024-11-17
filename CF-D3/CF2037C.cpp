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
#define frr(i, a, b) for(int i = a; i <= b; i++)
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";}
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";
 
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        // a[i]+a[i+1] shouldn't equal to prime
        // the last number from odds + first number from evens should equal to prime
        int n; cin >> n;
        if (n<=3) {
            cout << -1 << endl;
            continue;
        }
        vi even;
        vi odd;
        for(int i = 1; i <= n; i++) {
            if (i&1) {
                odd.pb(i);
            } else {
                even.pb(i);
            }
        }
        int g = -1;
        for(int i = 0; i < even.size(); i++) {
            if (!isPrime(even[i]+odd[odd.size()-1])) {
                odd.pb(even[i]);
                g=even[i];
                break;
            }
        }
        if (g==-1) {
            cout << -1 << endl;
            continue;
        }
        for(int i = 0; i < even.size(); i++) {
            if (even[i]!=g) {
                odd.pb(even[i]);
            }
        }
        Print(odd); cout << endl;
    }
    return 0;
}
