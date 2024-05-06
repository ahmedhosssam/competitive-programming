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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a = 4999999;
    int b = 499999;
    int g = 1;
    while(b<=a) {
        g*=b;
        b++;
    }
    cout << g << endl;
    /*
    int t; cin >> t;
    while (t--) {
        int A, B; cin >> A >> B;
        int a = 1, b = 1;
        for(int i = 1; i <= A; i++) {
            a*=i;
        }
        for(int i = 1; i <= B; i++) {
            b*=i;
        }
        int res = 0;
        int n = a/b;
        while (n>1) {
            for(int i = 2; i <= n; i++) {
                if(n%i==0) {
                    res++;
                    n=n/i;
                    break;
                }
            }
        }
        cout << res << "\n";
    }
    */
    return 0;
}
