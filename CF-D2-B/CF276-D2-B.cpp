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

// abcda
//aababaa
//abababaa

// for (int i = 0; i < n; i++) {
int32_t main() {
    string a; cin >> a;
    int i = 0;
    int n = a.length();
    int res = 0;
    vi cnt(30, 0);
    frr(i, 0, n-1) {
        cnt[a[i]-'a']++;
    }
    int cnt_odd = 0;
    frr(i, 0, 26) {
        if(cnt[i]%2==1) {
            cnt_odd++;
        }
    }
    if(cnt_odd==0 || cnt_odd%2==1) {
        cout << "First\n";
    } else {
        cout << "Second\n";
    }
    return 0;
}
