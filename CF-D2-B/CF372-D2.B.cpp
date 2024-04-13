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
using namespace std;

//#define int long long

int32_t main() {
    string s; cin >> s;
    if (s.length()<26) {
        cout << -1 << endl;
        return 0;
    }
    //cout << s[0]-'A' << endl;
    for (int i = 0 ; i < s.length();i++) {
        vector<int> vis(26, 0);
        int gh=0;
        bool ok=false;
        for (int j = i ; j <= i+26;j++) {
            if (j==s.length()) { break; }
            if (s[j]=='?') { continue; }
            vis[s[j]-'A']++;
            if (vis[s[j]-'A']>=1) {
                ok=true;
            }
            gh++;
        }
        if (!ok) {
            for (int g = i ; g < i+26;g++) {
                if (g==s.length()) { break; }
                if (s[g]=='?') {
                    for (int k = 0 ; k < 26;k++) {
                        if (!vis[k]) {
                            //cout << vis[k] << endl;
                            s[g]= char(k+'A');
                            vis[k]=1;
                            gh++;
                            break;
                        }
                    }
                }
            }
            for (int i=0;i < s.length();i++) {
                if (s[i]=='?') { s[i]='A';}
            }
            cout << s << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
