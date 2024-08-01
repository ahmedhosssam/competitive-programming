#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
//#define int long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define frr(i, a, b) for(int i = a; i <= b; i++)

// for (int i = 0; i < n; i++) {
int32_t main() {
    string a; cin >> a;
    int k; cin >> k;
    if(a.length()==1) {
        cout << a << endl;
        return 0;
    }
    int l = a.size();
    for(int i = 0; i < l; i++) {
        int x = i;
        for(int j = i ; j < l;j++) {
            if(a[j]>a[x] && (j-i)<=k) {
                x=j;
            }
        }
        for(int j = x; j>i; j--) {
            swap(a[j], a[j-1]);
        }
        k-=(x-i);
    }
    cout << a << endl;
    return 0;
}
