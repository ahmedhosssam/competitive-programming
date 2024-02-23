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

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int operations = 0;
        int last = -1;

        for (int i = 0; i < n; ++i) {
            if (arr[i] == 1) {
                if (last != -1) {
                    operations += i - last - 1;
                }
                last = i;
            }
        }

        cout << operations << endl;
    }

    return 0;
}
