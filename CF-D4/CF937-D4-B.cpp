#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool g = true;
        string str = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (g) {
                    str += "##";
                } else {
                    str += "..";
                }
                g = !g;
            }
            cout << str << endl << str << endl;
            str = "";
            if (n%2==0) {
                g = !g;
            } else {
                continue;
            }
        }
    }
    return 0;
}
