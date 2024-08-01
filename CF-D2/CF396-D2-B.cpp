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
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int gg = false;
    for (int i = 0; i < n-2; i++) {
        if (arr[i] + arr[i+1] > arr[i+2]) {
            gg = true;
            break;
        }
    }

    cout << (gg ? "YES\n": "NO\n");
    /*
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    */
    return 0;
}
