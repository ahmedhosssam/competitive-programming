#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int t; cin >> t;
    int arr[5] = { 15, 10, 6, 3, 1 };
    //vector<int> arr = { 15, 10, 6, 3, 1 };

    while (t--) {
        int nn; cin >> nn;
        vector<float> ans;
        for (int j = 1; j <= 5; j++) {
            int n = nn;
            float res = 0;
            while (double(n) >= 1) {
                for (int i = 0; i < 5; i++) {
                    if (double(n)/double(arr[(i+j)%5]) >= 1) {
                        double g = double(n)/double(arr[(i+j)%5]);
                        n -= floor(g)*double(arr[(i+j)%5]);
                        res += floor(g);
                        //cout << arr[i] << " -- " << n << endl;
                        break;
                    }
                }
            }
            ans.push_back(res);
        }
        sort(ans.begin(), ans.end());
        printf("%.lf\n", ans[0]);
    }
    return 0;
}
