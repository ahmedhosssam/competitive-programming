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
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    int n; cin >> n;
    int res = 0;
    string s1, s2; cin >> s1 >> s2;
    for(int i =0  ;i < s1.length(); i++) {
        if(s1[i]!=s2[i] && s1[i+1]==s2[i+1]) {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}
