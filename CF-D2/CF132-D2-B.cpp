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
    int n; cin >> n;
    int x[n];       // x --> r1
    for (int i = 0; i <n; i++) {
        cin >> x[i];
    }
    sort(x, x+n);

    int m; cin >> m;
    int y[m];       // y --> p1
    for (int i = 0; i <m; i++) {
        cin >> y[i];
    }
    sort(y, y+m);

    int k; cin >> k;
    int z[k];       // z --> p2
    for (int i = 0; i <k; i++) {
        cin >> z[i];
    }
    sort(z, z+k);

    int A, B; cin >> A >> B;
    
    // r2 = sqrt( (B * p1 * pow(r1, 2)) / (A * p2 + B * p1) )
    float r2 = sqrt((B*y[m-1]*pow(x[n-1],2))/(A*z[0]+B*y[m-1]));

    printf("%.12f\n", r2);

    return 0;
}
