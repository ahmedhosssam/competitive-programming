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
*       G G G H G H H G H H H G H G  
*/

// for (int i = 0; i < n; i++) {
int32_t main() {
    int n; cin >> n;
    int res = 0;
    string s; cin >> s;
    for(int i = s.length()-1; i>0; i-=2) {
        if(s[i]==s[i-1]) {
            continue;
        }
        if (s[i] == 'G' && res % 2 == 1) {
            //cout << i << " ";
            res++;
        }
        if (s[i] == 'H' && res % 2 == 0) {
            //cout << i << " ";
            res++;
        }
    }
    //cout << endl;
    cout << res << endl;
    return 0;
}
