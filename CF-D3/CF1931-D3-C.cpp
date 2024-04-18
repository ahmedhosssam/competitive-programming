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
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int res = n;
        //for (int i = 0; i < n; i++) {
        for (int x : {arr[0], arr[n - 1]}) {
            int l = 0;
            int r = n;
            while(l<n&&arr[l]==x) {
                ++l;
            }
            if(l==r) {
                res=0;
                continue;
            }
            while(arr[r-1]==x){
                --r;
            }
            res=min(res, r-l);
        }
        cout << res << endl;
    }
    return 0;
}
