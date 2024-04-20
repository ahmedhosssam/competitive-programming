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
        string s;
        vector<int> p(n+1, 0);
        cin >> s;
        for(int i = 0; i < n; i++) {
            if(s[i]=='1') {
                if(i==0) {
                    p[0]=1;
                } else {
                    p[i]=p[i-1]+1;
                }
            }
        }
    }
    return 0;
}
