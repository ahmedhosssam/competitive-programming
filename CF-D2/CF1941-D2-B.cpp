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
        for(int i = 0; i < n;i++) {
            cin >> arr[i];
        }

        for(int i = 1; i < n-1;i++) {
            if(arr[i]==0) {
                continue;
            }
            int x = arr[i]/2;
            int m = min(x, min(arr[i-1], arr[i+1]));
            arr[i-1]-=m;
            arr[i]-=2*m;
            arr[i+1]-=m;
            /*
            while(m>0) {
                arr[i-1]--;
                arr[i]-=2;
                arr[i+1]--;
                m--;
            }
            */
        }

        bool ok = true;
        // to check the zeros
        for(int i = 0; i < n;i++) {
            //cout << arr[i] << " ";
            if(arr[i]!=0) {
                ok =false;
            }
        }
        cout << (ok?"YES\n":"NO\n");
    }
    return 0;
}
