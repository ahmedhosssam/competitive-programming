#include <bits/stdc++.h>
using namespace std;

#define int long long

// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    //char c = '6';
    string str; cin >> str;
    int res = 0;

    while (str.size() > 1) {
        int gg = 0;
        for (int i = 0; i < str.size() ; i++) {
            gg += str[i] - '0';
        }
        str = to_string(gg);
        res++;
    }
    cout << res << endl;
    return 0;
}
