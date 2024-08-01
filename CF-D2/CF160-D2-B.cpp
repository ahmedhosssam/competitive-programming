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
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    int res = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0 && k > 0) {
            arr[i] = abs(arr[i]);
            k--;
        }
        res += arr[i];
    }
    sort(arr.begin() ,arr.end());
    
    if (k%2 == 1) {
        res -= (arr[0]*2);
    }

    cout << res << endl;

    return 0;
}
