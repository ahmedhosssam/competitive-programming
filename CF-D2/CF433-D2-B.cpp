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
    int n; cin >> n;
    vector<int> arr(n+1, 0);
    vector<int> arrsorted(n+1, 0);
    vector<int> sum(n+1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        arrsorted[i] = arr[i];
        sum[i] = sum[i-1] + arr[i];
    }

    vector<int> sumsorted(n+1, 0);
    sort(arrsorted.begin(), arrsorted.end());
    for (int i = 1; i <= n; i++) {
        sumsorted[i] = sumsorted[i-1] + arrsorted[i];
    }

    //for (int i = 1; i <= n; i++) {
    //    cout << arrsorted[i] << " ";
    //}

    int nn; cin >> nn;
    int q[nn+1][3];
    for (int i = 1; i <= nn; i++) {
        cin >> q[i][0];
        cin >> q[i][1];
        cin >> q[i][2];

        if (q[i][0] == 1) {
            cout << sum[q[i][2]]-sum[q[i][1]-1] << endl;
        } else {
            cout << sumsorted[q[i][2]]-sumsorted[q[i][1]-1] << endl;
        }
    }


    return 0;
}
