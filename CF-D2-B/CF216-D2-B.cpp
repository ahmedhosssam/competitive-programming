#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long

int32_t main() {
    int n, k, l, r, sall, sk;
    cin>>n>>k>>l>>r>>sall>>sk;
    vector<int> arr(n, r);
    int sum = n*r;
    if (sum>sall) {
        for (int i = 0; i < n; i++) {
            if (sum==sall) {
                break;
            }
            if (arr[i]>r) {
                while (arr[i]>=r) {
                    if (sum==sall) {
                        break;
                    }
                    arr[i]--;
                    sum--;
                }
            }
            while (arr[i]>=l) {
                if (sum==sall) {
                    break;
                }
                arr[i]--;
                sum--;
            }
        }
    } else if (sum<sall) {
        for (int i = 0; i < n; i++) {
            if (sum==sall) {
                break;
            }
            if (arr[i]<l) {
                while (arr[i]<=r) {
                    if (sum==sall) {
                        break;
                    }
                    arr[i]++;
                    sum++;
                }
            }
            while (arr[i]<=r) {
                if (sum==sall) {
                    break;
                }
                arr[i]++;
                sum++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
