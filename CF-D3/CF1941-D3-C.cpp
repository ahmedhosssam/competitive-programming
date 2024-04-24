#include <iostream>
#include <set>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
#include <unordered_set>
using namespace std;
 
#define int long long
 
// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n, m, x; cin >> n >> m >> x;
        set<int> s[2];
        int ix = 0;
        s[ix].insert(x);

        while(m--) {
            int a; cin >> a;
            char ch; cin >> ch;
            while(!s[ix].empty()) {
                int u = *(s[ix].begin());
                s[ix].erase(u);
                int g = ((u+a)+n)%n;
                int g2 = ((u-a)+n)%n;
                if(ch=='?'||ch=='0') {
                    if(g==0) {
                        s[!ix].insert(n);
                    } else {
                        s[!ix].insert(g);
                    }
                }
                if (ch=='?'||ch=='1') {
                    if(g2==0) {
                        s[!ix].insert(n);
                    } else {
                        s[!ix].insert(g2);
                    }
                }
            }
            ix= !ix;
        }
        cout << s[ix].size() << '\n';
        for (auto& x : s[ix]) {
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
