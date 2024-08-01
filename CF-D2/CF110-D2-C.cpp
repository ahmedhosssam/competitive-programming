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

// for (int i = 0; i < n; i++) {
int32_t main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        if(i*4<=n && (n-i*4)%7==0) {
            for (int j = 0; j < i ; j++) {
                cout << 4;
            }
            for (int j = 0; j < (n-i*4)/7; j++) {
                cout << 7;
            }
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
