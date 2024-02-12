#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
#define int long long
 
int32_t main() {
    int n; cin >> n;

    int res = 0;

    while (n > 0) {
        if (n%2 == 1) {
            res++;
        }
        //cout << n << endl;
        n = n/2;
    }
    cout << res << endl;
 
    return 0;
}
