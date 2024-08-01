#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int n; cin >> n;
    int arr[n][2];
    for (int i =0 ; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    string res = "Poor Alex";
    for (int i =0 ; i < n; i++) {
        if (arr[i][0] != arr[i][1]) {
            res = "Happy Alex";
            break;
        }
    }
    cout << res << endl;
    return 0;
}
