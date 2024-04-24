#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long

// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int res = 0;
        int bal = 0;
        for(int i = 0; i < n;i++) {
            if(s[i]=='(') {
                bal++;
            } else {
                bal--;
            }
            if(bal<0) {
                res++;
                bal=0;
            }
        }
        cout << res << endl;
    }
    return 0;
}
