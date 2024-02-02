#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define int long long

int32_t main() {
    int n; cin >> n;
    int arr[n];
    int max = 1;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0 ; i < n; i++) {
        int res = 1;
        if (i == 0) {
            for (int j = 1; j < n; j++) {
                if (arr[j] > arr[j-1]) { break; }
                res++;
            }
        } else if (i == n-1) {
            for (int j = n-2; j >= 0; j--) {
                if (arr[j] > arr[j+1]) { break; }
                res++;
            }
        } else {
            for (int j = i-1; j >= 0; j--) {
                if (arr[j] > arr[j+1]) { break; }
                res++;
            }

            for (int k = i+1; k < n; k++) {
                if (arr[k] > arr[k-1]) { break; }
                res++;
            }
        }
        if (res > max) { max = res; }
    }
    cout << max << endl;

    return 0;
}
