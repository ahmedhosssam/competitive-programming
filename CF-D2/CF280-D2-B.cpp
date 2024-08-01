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
    int n, l; cin >> n >> l;
    vector<int> arr;
    int x;
    for (int i= 0 ;i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    int L = 2*arr[0];
    int R = (l-arr[n-1])*2;
    int P = 0;
    for (int i = 0; i < n-1; i++) {
        P = max(P, arr[i+1]-arr[i]);
    }
    int res = max(L, max(P, R));
    printf("%.10f\n", res/2.);
    return 0;
}
