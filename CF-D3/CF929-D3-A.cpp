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

        int sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += abs(a[i]);
        }
        cout << sum << endl;
    }
    return 0;
}
