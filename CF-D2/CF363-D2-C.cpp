#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cstdint>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0 ;i < n ; i++) {
        cin >> a[i];
    }
    int res = 0;

    if(a[0] == 0) {
        res++;
    }

    for(int i=1;i<n;i++) {
        if(a[i] == 0) {
            res++;
        } else if(a[i] == 1 && a[i-1] == 1) {
            a[i] = 0;
            res++;
        }
        else if(a[i] == 2 && a[i-1] == 2) {
            a[i] = 0;
            res++;
        } else {
            if(a[i-1] == 1) {
                a[i] = 2;
            } else if(a[i-1] == 2) {
                a[i] = 1;
            }
        }
    }

    cout << res << endl;
    return 0;
}
