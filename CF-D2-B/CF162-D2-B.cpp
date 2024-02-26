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
    while (t--) {
        int n; cin >> n; // monsters
        int k; cin >> k; // bullets
        vector<pair<int, int>> arr;

        // health
        for (int i = 0; i < n; i++) {
            pair<int, int> p;
            cin >> p.second;
            p.first = 0;
            arr.push_back(p);
        }

        // pos
        for (int i = 0; i < n; i++) {
            int g; cin >> g;
            arr[i].first = abs(g);
        }

        /*
        for (int i = 0; i < n; i++) {
            cout << arr[i].first << " " << arr[i].second << endl;
        }
        */

        sort(arr.begin(), arr.end());
        bool yes = true;
        int i = 0;
        //int j = 0; // pos
        int l = 0;
        while (true) {
            //cout << arr[i].first << endl;
            //cout << " --> " << arr[i].second << endl;
            if (i == n) {
                break;
            }

            //arr[i].second -= k;
            int b = k;
            int p = i;
            while (b-- && p < n) {
                arr[p].second--;
                if (arr[p].second == 0) {
                    p++;
                }
            }

            // && arr[i].second < 1
            if (arr[i].first-l == 0 ) {
                //cout << " --> " << l << endl;
                yes = false;
                break;
            }

            l++;
            i = p;
        }

        cout << (yes ? "YES\n" : "NO\n");
    }
    return 0;
}
