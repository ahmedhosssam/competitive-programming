#include <bits/stdc++.h>
using namespace std;

#define int long long

string mul(string s, int k) {
    string res = "";
    while (k--) res += s;
    return res;
}

int lcm(int a, int b) {
    cout << "gg\n";
    return abs(a*b) / gcd(a, b);
}

// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while (t--) {
        string s1; cin >> s1;
        string s2; cin >> s2;
        int n = s1.length();
        int m = s2.length();
        int g = __gcd(n, m);
        if(mul(s1, m/g) == mul(s2, n/g)) {
            cout << mul(s1, m/g) << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
