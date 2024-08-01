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
    int P = 1000000000+7;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int s = 0, sum = 0, cur = 0;
        for(int i = 0; i < n; i++) {
            sum+=a[i];
            cur+=a[i];
            cur=max(cur, (long long)0);
            s=max(s, cur);
            //cout << s << "--\n";
        }
        sum = (sum%P+P)%P;
        s = s%P;
        int t = 1;
        for(int i = 0; i < k; i++) {
            t=t*2%P;
        }
        int res = ((sum+s*t-s)+P)%P;
        cout << res << endl;
    }
    return 0;
}
