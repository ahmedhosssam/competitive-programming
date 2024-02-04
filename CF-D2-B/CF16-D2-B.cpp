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
    int n; int m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    for (int i = 0; i<m;i++) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    if (m > 1) {
        sort(v.begin(), v.end(), [](auto &left, auto &right) {
            return left.second < right.second;
        });
        reverse(v.begin(), v.end());
    }
    int res = 0;

    /*
    for (int i = 0; i<m;i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
    */

    int i = 0;
    int j = 0;
    while(n--) {
        res += v[i].second;
        j++;
        if (j == v[i].first) {
            i++;
            j = 0;
        }
        if (i == v.size()) { break; }
    }
    cout << res << endl;
    return 0;
}
