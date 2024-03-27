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
#define MAX 100

int cnt = 0;
int n;
int t = 0;
int x;
int visited[MAX][MAX];
vector<string> str(MAX);

void dfs(int z, int y) {
    if (z < 0 || z >= n || y < 0 || y >= x) {
        return;
    }
    if (visited[z][y] || str[z][y] != '1') {
        return;
    }
    visited[z][y] = 1;
    //cout << z << " -- " << y << endl;
    
    dfs(z, y-1);
    dfs(z, y+1);
    dfs(z+1, y);
    dfs(z-1, y);
    dfs(z+1, y-1);
    dfs(z+1, y+1);
    dfs(z-1, y+1);
    dfs(z-1, y-1);
}

void solve() {
    cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    x = str[0].length();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < x; j++) {
            visited[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j] && str[i][j] == '1') {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << "Image number " << t << " contains " << cnt << " war eagles.\n";
}

int32_t main() {
    while (cin >> n) {
        t++;
        solve();
    }
    return 0;
}
