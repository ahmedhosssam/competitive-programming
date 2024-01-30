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
    int step;
    int mod;

    vector<int> v;
    while (cin >> step) {
        cin >> mod;
        v.push_back(0);

        int x = step;
        while (true) {

            if (x < mod) {
                v.push_back(x);
            } else {
                x = x%mod;
                if (x == 0) {
                    break;
                }
                x += step;
                v.push_back(x);
            }
            x+=step;
            cout << x << endl;
        }
        /*
        for (int i =step*2; i< 1000000; i+=step) {
            if (i%mod == v[0]) {
                break;
            } else {
                v.push_back(i%mod);
            }
        }
        */

        sort(v.begin(), v.end());

        bool is = true;
        /*
        for (int i =0; i< v.size()-2; i++) {
            if (v[i] != v[i+1]-1) {
                is = false;
                break;
            }
        }
        cout << (is ? "Good Choice\n" : "Bad Choice\n");
        */

        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
        v.clear();
    }
    return 0;
}
