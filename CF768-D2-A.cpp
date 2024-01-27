#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define int long long

int32_t main() {
    int n; cin >> n;
    vector<int> arr;
    int xx;
    for (int i =0; i< n;i++) {
        cin >>xx;
        arr.push_back(xx);
    }

    int res = 0;

    sort(arr.begin(), arr.end());

    if (n>2) {
        for (int i =1; i< n-1;i++) {
            if (arr[i] > arr[0] && arr[i] < arr[n-1]) {
                res++;
            }
        }
        cout << res << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
