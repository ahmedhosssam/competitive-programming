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
#define MAX 101
int n; 
vector<string> str;
int vis[MAX][MAX];

void dfs(int i, int j) {
    if (i < 0 || j < 0 || i == n || j == n) { return; }
    if (str[i][j] == '.' || vis[i][j]) { return; }
    vis[i][j] = 1;
    dfs(i-1, j);
    dfs(i+1, j);
    dfs(i, j-1);
    dfs(i, j+1);
}

int32_t main() {
    int t; cin >> t;
    int k = 1;
    while (t--) {
        int res = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                vis[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            str.push_back(s);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j] && str[i][j] == 'x') {
                    res++;
                    dfs(i, j);
                }
            }
        }
        cout << "Case " << k << ": " << res << endl;
        k++;
        str.clear();
    }
    return 0;
}
