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
        int k, q; cin >> k >> q;
        int arr[k];
        for (int i= 0 ; i< k; i++) {
            cin >> arr[i];
        }
        int gg;
        for (int i= 0 ; i< q; i++) {
            cin >> gg;
            for (int j= 0 ; j< k;) {
                if(arr[j]<=gg && gg>0) {
                    gg--;
                    j=0;
                    continue;
                }
                j++;
            }
            cout << gg << " ";
        }
        cout << endl;
    }
    return 0;
}
