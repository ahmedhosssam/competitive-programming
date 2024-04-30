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
    string a; cin >> a;
    int k; cin >> k;
    if(a.length()==1) {
        cout << a << endl;
        return 0;
    }
    for (int i = 1; i < a.length() && k > 0; i++) {
        if(a[i]>a[i-1]) {
            int j=i;
            while(a[j]>a[j-1]) {
                swap(a[j], a[j-1]);
                j--;
                k--;
                if(k==0 || j==0) {
                    break;
                }
            }
        }
    }
    cout << a << endl;
    return 0;
}
