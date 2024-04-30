#include <iostream>
#include <string>
#include <cstring>
#include <set>
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
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i = 0;i < n;i++){
            cin >> vec[i];
        } 
        vector<int> left(n);
        vector<int> cnt(n+1);
        int mex = 0;
        for(int i = 0;i < n;i++){
            cnt[vec[i]] = 1;
            while(mex <= n && cnt[mex]){
                mex++;
            }
            left[i] = mex;
        }
        mex = 0;
        cnt = vector<int>(n+1);
        bool ok = false;
        for(int i = n-1;i > 0;i--){
            cnt[vec[i]] = 1;
            while(mex <= n && cnt[mex]){
                mex++;
            }
            if(left[i-1] == mex){
                cout << 2 << endl;
                cout << 1 << " " << i << endl;
                cout << (i+1) << " " << n << endl;
                ok=true;
                break;
            }
        }
        if(!ok) {
            cout << -1 << endl;
        }
    }
    return 0;
}
