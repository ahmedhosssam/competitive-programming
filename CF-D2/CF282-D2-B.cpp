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
    int n; cin >> n;
    int a[n];
    int g[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> g[i];
    }
    int aa = 0;
    int gg = 0;
    string res = "";
    for(int i = 0; i < n; i++) {
        if(abs((a[i]+aa)-gg)<=500) {
            aa+=a[i];
            res+='A';
        } else if (abs((g[i]+gg)-aa)<=500) {
            gg+=g[i];
            res+='G';
        } else {
            cout << "-1\n";
            return 0;
        }
    }
    if(abs(aa-gg)>500) {
        cout << "-1\n";
    } else {
        cout << res << endl;
    }
    return 0;
}
