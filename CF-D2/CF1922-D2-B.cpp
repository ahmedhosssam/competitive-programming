#include <bits/stdc++.h>
using namespace std;

#define int long long

// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            mp[x]++;
        }
        
        int res = 0;
        int sum = 0;
        for (auto it : mp) {
            int cnt = it.second;
            if(cnt >= 3)
                res += cnt*(cnt-1)*(cnt-2)/6;
            if(cnt >= 2)
                res += cnt*(cnt-1)/2*sum;
            sum += cnt;
        }
        
        cout << res << endl;
    }
    return 0;
}
