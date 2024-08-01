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
    while(t--) {
        int n, k; cin >> n >> k;
        vector<pair<int, int>> a(n);
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            a[i]={0, x};
        }
        for(int i=0;i<n;i++){
            cin>>x;
            x=abs(x);
            a[i].first=x;
        }
        sort(a.begin(), a.end());
        int i = 0;
        int j = 0;
        bool ok=true;
        int c=0;
        for(int i = 0; i < n;i++) {
            c+=a[i].second;
            if((a[i].first*k)<c) {
                cout << "NO\n";
                ok=false;
                break;
            }
        }
        if(ok) { cout << "YES\n"; }
    }
    return 0;
}
