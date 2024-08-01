#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define int long long

int32_t main() {
    int n, t, k, d;
    cin >> n;
    cin >> t;
    cin >> k;
    cin >> d;

    int p = (t+d)/t;

    if(k*p < n) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }

    return 0;
}
