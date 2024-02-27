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
        int a, b, l;
        cin >> a >> b >> l;

        int sum = 0;
        // l = k * pow(a, x) * pow(b, y)
        int k = 1;
        while (k < l) {
            bool done = false;
            for (int x = 1; x <= l; x++) {
                for (int y = 1; y <= l; y++) {
                    if (l == (k * pow(a, x) * pow(b, y))) {
                        sum++;
                        done = true;
                        break;
                    }
                }
                if (done) {
                    break;
                }
            }
            k++;
        }

        cout << sum << endl;
    }
    return 0;
}
