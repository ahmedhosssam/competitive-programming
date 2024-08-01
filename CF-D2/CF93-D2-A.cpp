#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int n, k; cin >> n >> k;
    float res = 0;
    float x[n];
    float y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n-1; i++) {
        res += sqrt(pow(x[i]-x[i+1] , 2)+ pow(y[i]-y[i+1], 2));
    }
    res /= 50;
    res *= (float)k;
    printf("%.8f\n", res);

    return 0;
}
