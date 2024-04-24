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
        vector<int> arr(n);
        vector<int> a;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        a.push_back(arr[n-1]);
        for (int i = n-2; i >= 0; i--) {
            if(arr[i]>a.back()) {
                a.push_back(arr[i]%10);
                a.push_back(arr[i]/10);
            } else {
                a.push_back(arr[i]);
            }
        }


        reverse(a.begin(), a.end());
        bool ok = is_sorted(a.begin(), a.end());
        if(ok) { cout << "YES\n"; }
        else { cout << "NO\n"; }
    }
    return 0;
}
