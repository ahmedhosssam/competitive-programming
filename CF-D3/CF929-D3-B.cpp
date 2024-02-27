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
            sum += a[i];
        }
        if (sum%3==0) {
            cout << 0 << endl;
        } else {
            sort(a.begin(), a.end());
            int p1 = 0;
            int p2 = 0;

            // p1
            while (sum%3 != 0) {
                sum++;
                p1++;
            }
            sum -= p1;

            bool t = false;
            for (int i = 0; i < n; i++) {
                //sum -= a[i];
                int var = sum-a[i];
                if (var%3==0) {
                    t = true;
                    p2++;
                    break;
                } 
            }

            if (t) {
                cout << 1 << endl;
            } else {
                cout << p1 << endl;
            }
        }
    }
    return 0;
}
