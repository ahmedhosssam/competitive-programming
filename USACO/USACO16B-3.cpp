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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    int n; cin >> n;
    vector<pair<string, string>> a;
    vector<int> freq(26, 0);
    for(int i = 0 ; i < n;i++) {
        string s; cin >> s;
        string ss; cin >> ss;
        a.pb({s, ss});
    }
    for(int i = 0 ; i < a.size();i++) {
        vector<int> f1(26, 0);
        vector<int> f2(26, 0);
        for(int j = 0 ; j < a[i].F.length();j++) {
            f1[a[i].F[j]-'a']++;
        }
        for(int j = 0 ; j < a[i].S.length();j++) {
            f2[a[i].S[j]-'a']++;
        }
        for(int j = 0 ; j < 26; j++) {
            freq[j]+=max(f1[j], f2[j]);
        }
    }
    for(int i = 0 ; i < 26; i++) {
        cout << freq[i] << endl;
    }
    return 0;
}
