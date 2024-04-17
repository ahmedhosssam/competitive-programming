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
        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if(arr[0]!=arr[1]) {
            cout << "YES\n";
            continue;
        } else {
            bool ok = false;
            for(int i = 1 ; i < n ; i++) {
                if (arr[i]%arr[0]!=0) {
                    ok=true;
                }
            }
            if(ok) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
