#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long
int n, m;

int dfs(int x, int i) {
    if (x < 0) {
        return i;
    }
    cout << x << endl;
    int y = dfs(2*x, i++);
    int z = dfs(x-1, i++);

    return min(y, z);
}

int32_t main() {
    cin >> n >> m;
    cout << dfs(n, 0) << endl;
    return 0;
}
