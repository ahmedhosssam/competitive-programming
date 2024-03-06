#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cstdint>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int n; cin >> n;
    vector<pair<int, int>> arr;
    vector<bool> vis(555555);

    for (int i = 0 ;i < n; i++) {
        int l; cin >> l;
        arr.push_back({l, l});
        vis[l] = true;
    }
    int j; cin >> j;
    vector<int> res;
    for (int i = 0 ;i < j; i++) {
        int o; cin >> o;
        //vis[o] = false;

        for (int u = 0; u < arr.size(); u++) {
            if (arr[u].first == o) {
                vis[arr[u].second] = false;
                for (int k = arr[u].second+1; k < vis.size(); k++) {
                    if (vis[k] == false) {
                        vis[k] = true;
                        res.push_back(k);
                        arr[u].second = k;
                        break;
                    }
                }
            break;
            }
        }
    }
    for (int i = 0 ;i < res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}
