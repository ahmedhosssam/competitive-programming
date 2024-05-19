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
    int n; // hight
    int m; // width
    int k; // waste no.
    int t; // queries no.
    int w1, w2;
     
    // Carrots --> kiwis --> grapes 
    cin >> n >> m >> k >> t;

    vector<vector<char>> grid(n+1, vector<char>(m+1));
    //char grid[n+1][m+1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            grid[i][j]='X';
        }
    }

    for (int i = 1; i <= k; i++) {
        cin >> w1 >> w2;
        grid[w1][w2] = 'B';
    }

    int gg = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (grid[i][j] == 'B') { continue; }
            if (gg == 0) {
                grid[i][j] = 'C';
                gg++;
            } else if (gg == 1) {
                grid[i][j] = 'K';
                gg++;
            } else if (gg == 2) {
                grid[i][j] = 'G';
                gg = 0;
            }
        }
    }

    int q1, q2;
    while (t--) {
        cin >> q1 >> q2;
        if (grid[q1][q2] == 'B') {
            cout << "Waste\n";
        } else if (grid[q1][q2] == 'C') {
            cout << "Carrots\n";
        } else if (grid[q1][q2] == 'K') {
            cout << "Kiwis\n";
        } else if (grid[q1][q2] == 'G') {
            cout << "Grapes\n";
        }
    }

    return 0;
}
