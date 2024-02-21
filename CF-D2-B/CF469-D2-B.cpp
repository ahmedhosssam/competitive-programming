#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(0);
    int p, q, l, r, a, b, t[2000], c[2000], d[2000], sum = 0;
    cin >> p >> q >> l >> r;

    for(int i=0; i < 1000; ++i) {
        t[i] = 0;
    }
 
    for(int i=0 ; i < p; ++i) {
        cin >> a >> b;
        for(int j = a; j <= b; ++j)
            t[j] = 1;
    }

    for(int i = 0; i < q; ++i) {
        cin >> c[i] >> d[i];
    }

    for(int i = l; i <= r; ++i) {
        bool flag = true;

        for(int j = 0; j < q && flag; ++j) {
            for(int k = c[j]+i ; k <= d[j]+i; ++k) {
                if(t[k]) {
                    //cout << c[j]+k << " -- " << i << endl;
                    flag = false;
                    break;
                }
            }
        }
        if(!flag) {
            sum++;
        }
    }
    //cout << "--------\n";
    cout<< sum << endl;
    return 0;
}
