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
        int n, c, d; cin >> n >> c >> d;
        vector<int> arr(n*n);
        for (int i= 0; i<n*n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int b = arr[0];
        bool ok = true;

        int arr2[n][n];
        arr2[0][0]=b;
        vector<int> arr3;
        for (int j= 0; j<n; j++) {
            for (int i= 0; i<n; i++) {
                if (i+1<n) {
                    arr2[j][i+1]=arr2[j][i]+c;
                }
                if (j+1<n) {
                    arr2[j+1][i]=arr2[j][i]+d;
                }
            }
        }
        for (int j= 0; j<n; j++) {
            for (int i= 0; i<n; i++) {
                arr3.push_back(arr2[j][i]);
            }
        }
        sort(arr3.begin(), arr3.end());
        for (int i= 0; i<n*n; i++) {
            //cout << arr[i] << " -- "<< arr3[i] << endl;
            if (arr[i]!=arr3[i]) {
                ok = false;
                break;
            }
        }
        cout << (ok?"YES\n":"NO\n");
    }
    return 0;
}
