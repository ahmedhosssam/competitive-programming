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
    int t; cin >>t;
    while (t--) {
        string s1; cin >> s1;
        string s2; cin >> s2;
        string s3; cin >> s3;

        vector<int>vis(3, 0);
        for (int i = 0; i < 3; i++) {
            vis[s1[i]-'A']=1;
        }
        for (int i = 0; i < 3; i++) {
            if (s1[i]=='?') {
                if(!vis[0]) {
                    cout << 'A' << endl;
                } else if (!vis[1]) {
                    cout << 'B' << endl;
                } else if (!vis[2]) {
                    cout << 'C' << endl;
                }
            }
        }
        vis=vector<int>(3, 0);
        for (int i = 0; i < 3; i++) {
            vis[s2[i]-'A']=1;
        }
        for (int i = 0; i < 3; i++) {
            if (s2[i]=='?') {
                if(!vis[0]) {
                    cout << 'A' << endl;
                } else if (!vis[1]) {
                    cout << 'B' << endl;
                } else if (!vis[2]) {
                    cout << 'C' << endl;
                }
            }
        }
        vis=vector<int>(3, 0);
        for (int i = 0; i < 3; i++) {
            vis[s3[i]-'A']=1;
        }
        for (int i = 0; i < 3; i++) {
            if (s3[i]=='?') {
                if(!vis[0]) {
                    cout << 'A' << endl;
                } else if (!vis[1]) {
                    cout << 'B' << endl;
                } else if (!vis[2]) {
                    cout << 'C' << endl;
                }
            }
        }
    }
    return 0;
}
