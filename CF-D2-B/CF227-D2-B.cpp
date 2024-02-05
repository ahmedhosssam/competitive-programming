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
    int arr[100005];
    int h;
    for (int i = 1; i <= n; i++) {
        cin >> h;
        arr[h] = i;
    }
    int m; cin >> m;

    int x = 0;
    int y = 0;

    int s;
    for (int i = 1; i <= m; i++) {
        cin >> s;
        x += arr[s];
        y += n + 1 - arr[s];
    }

    cout << x << " " << y << endl;

    return 0;
}
