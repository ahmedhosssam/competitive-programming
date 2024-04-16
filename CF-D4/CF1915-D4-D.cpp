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
 
int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        string res;
        while (!s.empty()) {
            int x;
            if (s.back()=='a'||s.back()=='e') {
                x=2;
            } else {
                x=3;
            }
            while(x--) {
                res+=s.back();
                s.pop_back();
            }
            res+='.';
        }
        res.pop_back();
        reverse(res.begin(), res.end());
        cout << res << endl;
    }
    return 0;
}
