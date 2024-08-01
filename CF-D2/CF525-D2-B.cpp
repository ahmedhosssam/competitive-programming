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

/*
    abcedfgh
*/

// for (int i = 0; i < n; i++) {
int32_t main() {
    string s; cin >> s;
    int m; cin >> m;
    int n = s.length(); 
    vi prefix(n, 0);
    int x;
    for(int i = 0;i < m; i++) {
        cin >> x;
        x--;
        prefix[x]++;
    }
    for(int i = 1;i < n; i++) {
        prefix[i]+=prefix[i-1];
    }
    for(int i = 0;i < n/2; i++) {
        if(prefix[i]&1) {
            swap(s[i], s[n-i-1]);
        }
    }
    cout << s << endl;
    return 0;
}
