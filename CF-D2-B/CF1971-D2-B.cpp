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
 
// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int res = 0;
        int cost = 0;
        while(s.back()=='1'){
            s.pop_back();
        }
        for(int i = 0; i < s.length();i++) {
            if(s[i]=='1') {
                cost++;
            } else {
                if (cost>0) {
                    res+=cost+1;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
