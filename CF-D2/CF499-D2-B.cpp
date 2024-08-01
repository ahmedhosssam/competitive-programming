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
#include <unordered_map>
using namespace std;

#define int long long

// for (int i = 0; i < n; i++) {
int32_t main() {
    int n, m; cin >> n >> m;
    unordered_map<string, pair<string, string>> mp;
    vector<string> s(n);
    for (int i = 0; i < m; i++) {
        string s1, s2; cin >> s1 >> s2;
        mp[s1]={s1, s2};
    }
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        if(mp[s[i]].second.length() < mp[s[i]].first.length()) {
            cout << mp[s[i]].second << " ";
        } else if (mp[s[i]].second.length() > mp[s[i]].first.length()){
            cout << mp[s[i]].first << " ";
        } else {
            cout << mp[s[i]].first << " ";
        }
    }
    cout << endl;
    return 0;
}
