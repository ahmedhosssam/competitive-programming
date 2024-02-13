#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        bool res = true;
        int sum = 0;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        int gg = sum/n; // target
        for (int i = 0; i < n-1 ; i++) {
            if (arr[i] > gg) {
                arr[i+1] += arr[i]-gg;
                arr[i] = gg;
            }
        }
        if (arr[n-1] == gg) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

