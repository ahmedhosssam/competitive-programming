#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long
using namespace std;

int32_t main() {
    int t; cin >> t;
    vector<pair<int, string>> v;
    for (int i = 0; i < t; i++) {
        pair<int, string> p;
        cin >> p.first >> p.second;
        v.push_back(p);
    }

    for (int i = 0; i < t; i++) {
        int x = 0;
        int y = 0;
        for (int j = 0; j < v[i].first; j++) {
            if (v[i].second[j] == 'B') {
                x = j;
                break;
            }
        }
        for (int k = v[i].first ; k >= 0; k--) {
            if (v[i].second[k] == 'B') {
                y = k;
                break;
            }
        }
        cout << abs(y-x+1) << endl;
        //cout << "x = " << x <<" , y = " << y << endl;
    }

    return 0;
}
