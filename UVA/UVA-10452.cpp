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

int m, n;
vector<string> str(MAX);
int visited[MAX][MAX];
string ss = "IEHOVA";
int l = 0;

void dfs(int z, int y) {
    if (z < 0 || z >= m || y < 0 || y >= n) {
        return;
    }
    if (visited[z][y]) {
        return;
    }
    visited[z][y] = 1;
    if (y-1 >= 0) {
        if (str[z][y-1] == ss[l]) {
            l++;
            //cout << str[z][y-1];
            cout << "left ";
            dfs(z, y-1); // left
        }
        if (str[z][y-1] == '#') {
            cout << "left ";
            return;
        }
    }

    if (y+1 < n) {
        if (str[z][y+1] == ss[l]) {
            l++;
            //cout << str[z][y+1];
            cout << "right ";
            dfs(z, y+1); // right
        }
        if (str[z][y+1] == '#') {
            cout << "right ";
            return;
        }
    }

    if (z-1 >= 0) {
        if (str[z-1][y] == ss[l]) {
            l++;
            //cout << str[z-1][y];
            cout << "forth ";
            dfs(z-1, y); // forth
        }
        if (str[z-1][y] == '#') {
            cout << "forth ";
            return;
        }
    }

    
}

void solve() {
    cin >> m >> n;
    l = 0;
    for (int i = 0; i < m; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            visited[i][j] = 0;
        }
    }
    for (int i = m-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            if (str[i][j] == '@') {
                dfs(i, j);
                //break;
            }
        }
    }
    cout << endl;
}

int32_t main() {
    int n; cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}
