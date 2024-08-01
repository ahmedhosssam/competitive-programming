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
    int k; cin >> k;
    vector<int> arr(n+1, 0);
    vector<int> sum(n+1, 0);
    //int arr[n+1] = {0};
    //int sum[n+1] = {0};

    for (int i=1;i<=n;i++) {
        cin >> arr[i];
        sum[i] = sum[i-1] + arr[i];
    }

    int min = 2147483645;
    int minindex = 1;

    if (k==1) {
        for (int i=1;i<=n;i++) {
            if (arr[i] < min) {
                min = arr[i];
                minindex = i;
            }
        }
    } else {
    for (int i=k;i<=n;i++) {
        if (sum[i]-sum[i-k] < min) {
            min = sum[i]-sum[i-k];
            minindex = i-k+1;
        }
        //cout << sum[i]-sum[i-k] << endl;
    }
    }
    cout << minindex << endl;

    return 0;
}
