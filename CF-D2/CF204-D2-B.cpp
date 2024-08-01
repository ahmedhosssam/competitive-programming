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
    vector<pair<int, int>> a;
    for (int i=0;i<n;i++) {
        int h; cin >> h;
        a.push_back({h, i});
    }
    sort(a.begin(), a.end());
    vector<bool> vis(1000000, false);
    vector<pair<int, int>> res;
    for (int i=0;i<n;i++) {
        int g = 0;
        bool gg = true;
        if (a[i].first == a[i+1].first) {
            g = abs(a[i].second-a[i+1].second);
            for (int j=i+1;j<n;j++) {
                if(a[j].first != a[i].first) {
                    break;
                }
                if(g != abs(a[j].second - a[i].second)) {
                    gg = false;
                    break;
                }
            }
        }
        if (gg && !vis[a[i].first]) {
            res.push_back({a[i].first, g});
            //cout << a[i].first << " " << g << endl;
            vis[a[i].first] = true;
        }
    }

    cout << res.size() << endl;
    for (int i=0;i<res.size();i++) {
        cout << res[i].first << " " << res[i].second << endl;
    }

    return 0;
}
