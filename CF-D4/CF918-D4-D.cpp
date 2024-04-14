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
 
#define int long long
 
int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        string res="";
        vector<int>vis(n, 0);
        for (int i = 0; i < n; i++ ) {
            if (vis[i]) { continue;}
            if (s[i]=='b' || s[i]=='c' || s[i]=='d') {
                if (i+1==n) { continue; }
                if (s[i+1]=='a' || s[i+1]=='e') {
                    res+=s[i];
                    vis[i]=1;
                    res+=s[i+1];
                    vis[i+1]=1;
                    if (i+2==n) { continue; }
                    if (s[i+2]=='b'||s[i+2]=='c'||s[i+2]=='d') {
                        res+=s[i+2];
                        vis[i+2]=1;
                    }
                    res+='.';
                }
            }
        }
        if (res[res.length()-1]=='.') {
            res.erase(res.size() - 1);
        }
        cout << res << endl;
    }
    return 0;
}
