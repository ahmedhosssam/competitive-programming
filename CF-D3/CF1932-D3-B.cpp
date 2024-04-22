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

// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int cur = 0;
        for (int i = 0; i < n; i++) {
            //cout << cur << endl;
            cur+= a[i]-cur%a[i];
        }
        cout << cur << endl;
        //cout << "-----\n";
    }
    return 0;
}
