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
    vector<string> v;
    vector<pair<int, char>> res = {
        {0, 'A'},
        {0, 'B'},
        {0, 'C'}
    };

    string in;
    int x = 3;
    while (x--) {
        cin >> in;
        v.push_back(in);
    }

    for (int i =0; i<3;i++) {
        if (v[i][1] == '>') {
            for (int j =0; j<3;j++) {
                if (res[j].second == v[i][0]) {
                    res[j].first += 1;
                    break;
                }
            }
        } else {
            for (int j =0; j<3;j++) {
                if (res[j].second == v[i][2]) {
                    res[j].first += 1;
                    break;
                }
            }
        }
    }
    sort(res.begin(), res.end());

    if (res[0].first == 0 && res[1].first == 1 && res[2].first == 2) {
        for (int i =0; i<3;i++) {
            cout << res[i].second;
        }
        cout << endl;
    } else {
        cout << "Impossible\n";
    }
    return 0;
}
