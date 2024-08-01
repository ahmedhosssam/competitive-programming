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
        string s; cin >> s;
        int n = s.length();
        if (n==1) {
            cout << s;
            if (s[0]=='z') {
                cout << 'y';
            } else {
                char ch = static_cast<char>(s[0]+1);
                cout << ch;
            }
            cout << endl;
            continue;
        }
        bool ok = false;
        for(int i = 0; i < n-1; i++) {
            cout << s[i];
            if (s[i]==s[i+1] && s[i]!='z') {
                if (!ok) {
                    char ch = static_cast<char>(s[i]+1);
                    cout << ch;
                    ok = true;
                }
            } else if (s[i]==s[i+1] && s[i]=='z') {
                if (!ok) {
                    cout << 'y';
                    ok = true;
                }
            }
        }
        cout << s[n-1];
        if (!ok) {
            if (s[n-1]=='z') {
                cout << 'y';
            } else {
                char ch = static_cast<char>(s[n-1]+1);
                cout << ch;
            }
        }
        cout << endl;
        //Print(frq); cout << endl;
    }
    return 0;
}
