#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
#define int long long
 
int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int mn = v[0];
    int mx = v[n - 1];
    int rec = 0;
    while (mn != mx) {
        rec = mx - mn;
        for (int i = n-1; i >= 0; --i) {
            if (v[i] == mx) {
                v[i] = rec;
            }
        }
        sort(v.begin(), v.end());
        mn = v[0];
        mx = v[n - 1];
    }
    cout << mn << endl;

    return 0;
}
