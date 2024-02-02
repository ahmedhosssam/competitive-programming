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
    int t; cin >> t;
    int n;
    int m;
    for (int i =0; i<t;i++) {
        cin >> n >> m;
        if (m%2==0) {
            cout << n*(m/2) << endl;
        } else {
            cout << n*((m-1)/2) << endl;
        }
    }
    return 0;
}
