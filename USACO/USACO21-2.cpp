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
*       1 3 5 7 9 11 13
*
*       1, 3 5, 7, 9 11, 13
*
*       1 2 3 11 13 15 17
*
* */

// for (int i = 0; i < n; i++) {
int32_t main() {
    int n; cin >> n;
    int a[n];
    frr(i, 0, n-1) {
        cin >> a[i];
    }
    int even = 0;
    int odd = 0;
    for(int x : a) {
        if(x%2==0) {
            even++;
        } else {
            odd++;
        }
    }
    while(even<odd) {
        even++;
        odd-=2;
    }
    if(even>odd) {
        even = odd+1;
    }
    //cout << even << " " << odd << endl;
    cout << even+odd << endl;
    return 0;
}
