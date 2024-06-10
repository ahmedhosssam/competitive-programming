#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define int long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define frr(i, a, b) for(int i = a; i <= b; i++)
#define endl "\n"
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";}
#define YES cout << "YES\n";
#define NO cout << "NO\n";

void queens(int n, int i, vector<int> a, vector<int> b, vector<int> c, vector<vector<int>>& solutions) {
    if (i < n) {
        for (int j = 0; j < n; ++j) {
            if (find(a.begin(), a.end(), j) == a.end() && 
                find(b.begin(), b.end(), i + j) == b.end() && 
                find(c.begin(), c.end(), i - j) == c.end()) {
                vector<int> new_a = a;
                vector<int> new_b = b;
                vector<int> new_c = c;
                new_a.push_back(j);
                new_b.push_back(i + j);
                new_c.push_back(i - j);
                queens(n, i + 1, new_a, new_b, new_c, solutions);
            }
        }
    } else {
        solutions.push_back(a);
    }
}

int32_t main() {
    int n = 8;
    int res = 92;
    vector<vector<int>> sols;
    queens(n, 0, {}, {}, {}, sols);

    vector<string> a(8);
    vector<int> vis(92, 0);
    for(int i = 0 ; i < 8; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if (a[i][j]=='*') {
                for(int k = 0; k < sols.size(); k++) {
                    if (sols[k][j]==i && !vis[k]) {
                        //Print(sols[k]);
                        //cout << endl;
                        res--;
                        vis[k]=1;
                    }
                }
            }
        }
    }
    cout << res << endl;

    return 0;
}
