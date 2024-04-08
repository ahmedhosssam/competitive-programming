#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long

bool is_win(string config) {

	bool rows =
		(config[0] != '.' && config[0] == config[1] && config[1] == config[2]) ||
		(config[3] != '.' && config[3] == config[4] && config[4] == config[5]) ||
		(config[6] != '.' && config[6] == config[7] && config[7] == config[8]);

	bool columns =
		(config[0] != '.' && config[0] == config[3] && config[3] == config[6]) ||
		(config[1] != '.' && config[1] == config[4] && config[4] == config[7]) ||
		(config[2] != '.' && config[2] == config[5] && config[5] == config[8]);

	bool diagonals =
		(config[0] != '.' && config[0] == config[4] && config[4] == config[8]) ||
		(config[2] != '.' && config[2] == config[4] && config[4] == config[6]);

	return rows || columns || diagonals;
}

void solve() {
    string board="";
    while (cin >> board) {
        if (board=="end") {break;}
        string start=".........";
        queue<pair<string, bool>> q;
        q.push({start, 1});
        string res="invalid";
        while (!q.empty()) {
            string cur=q.front().first;
            bool cur_player=q.front().second;
            q.pop();
            if (cur==board) {
                res="valid";
                break;
            }
            if (is_win(cur)) {continue;}
            for(int i=0; i < 9; i++) {
                if(cur[i]=='.') {
                    cur[i]=(cur_player?'X':'O');
                    if(cur[i]==board[i]) {
                        q.push({cur, !cur_player});
                    }
                    cur[i]='.';
                }
            }
        }

        cout << res << endl;
    }
}

int32_t main() {
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
