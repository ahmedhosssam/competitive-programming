#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <set>
#include <climits>
using namespace std;
 
//#define int long long
 
// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while(t--) {
        int a, b, l; cin >> a >> b >> l;
        int ca = 0, cb = 0;
        int la = l, lb = l;
        //cout << ca << "--" << cb << endl;
        set<int> s;
        for(int x = 0; x <= 50 ; x++) {
            for(int y = 0; y <= 50 ; y++) {
                int g = (pow(a, x)*pow(b,y));
                int gg = l/g;
                if(g*gg==l) {
                    s.insert(gg);
                }
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}
