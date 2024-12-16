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
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";}
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
    string s, t; cin >> s >> t;
    // Automation: remove char from s
    // Array: Swap 2 chars from s
    // Both: Automation + Array
    // Need Tree: cannot be transformed
    if (s.find(t) != string::npos) {
        cout << "automaton\n";
        return 0;
    }
    map<char, int> c1;
    map<char, int> c2;
    for(int i = 0; i < s.length(); i++) {
        c1[s[i]]++;
        if (i < t.length()) {
            c2[t[i]]++;
        }
    }
    int g = 0;
    map<char, int> vis;
    for(int i = 0; i < s.length(); i++) {
        if (c1[s[i]]>=c2[s[i]] && c2[s[i]]!=0 && vis[s[i]]!=1) {
            g+=c2[s[i]];
            vis[s[i]]=1;
        }
    }
    string s2 = "";
    string t2 = t;
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == t[j]) {
            s2.pb(t[j]);
            j++;
        }
    }
    if (s2==t2) {
        cout << "automaton\n";
        return 0;
    }
    //cout << g << " " << t.length() << endl;
    if (g==t.length() && s.length()==t.length()) {
        cout << "array\n";
    } else if (g==t.length() && s.length()!=t.length()) {
        cout << "both\n";
    } else {
        cout << "need tree\n";
    }
    return 0;
}
