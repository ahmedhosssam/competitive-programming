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
    int t; cin >> t;
    int n;
    vector<int> v1;
    vector<int> v2;
    int x;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            v.push_back({x, 0});
        }
        for (int i = 0; i < n; i++) {
            cin >> x;
            v[i].second = x;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            cout << v[i].first << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++) {
            cout << v[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}
