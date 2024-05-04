#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
//#define int long long
#define F first
#define S second
#define pb push_back
#define frr(i, a, b) for(int i = a; i <= b; i++)

map<string, int> mp = {
    {"Beatrice", 0},
    {"Belinda", 1},
    {"Bella", 2},
    {"Bessie", 3},
    {"Betsy", 4},
    {"Blue", 5},
    {"Buttercup", 6},
    {"Sue", 7}
};

vector<vector<string>> adj(8);
vector<vector<string>> comp(8);
int visited[8];
int j = 0;

void dfs(int v) {
    visited[v] = 1;
    for (string u : adj[v]) {
        if (!visited[mp[u]]) {
            comp[j].pb(u);
            dfs(mp[u]);
        }
    }
}

int32_t main() {
    freopen("lineup.in","r",stdin);
    freopen("lineup.out","w",stdout);
    int n; cin >> n;
    frr(i, 0, n-1) {
        vector<string> arr(6);
        frr(j, 0, 5) {
            cin >> arr[j];
        }
        adj[mp[arr[0]]].pb(arr[5]);
        adj[mp[arr[5]]].pb(arr[0]);
    }

    for(auto p : mp) {
        if(!visited[p.S]&&adj[p.S].size()<2) {
            comp[j].pb(p.F);
            dfs(p.S);
        }
        j++;
    }

    
    for(auto x : comp) {
        for(auto y : x) {
            cout << y << endl;
        }
    }

    return 0;
}
