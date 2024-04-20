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
    while(t--) {
        int n; cin >> n;
        int j=n;
        int k=1;
        if(n%2!=0) {
            k=2;
        }
        vector<int> vis(n+1, 0);
        while(j>0&&k<=n) {
            if(!vis[j]) {
                cout << j << " ";
                vis[j]=1;
            }
            if(!vis[k]) {
                cout << k << " ";
                vis[k]=1;
            }
            //cout << j << " " << k << " ";
            j-=2;
            k+=2;
        }
        if(!vis[1]) {
            cout << 1;
        }
        cout << endl;
    }
    return 0;
}
