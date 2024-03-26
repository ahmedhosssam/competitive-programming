#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long

int32_t main() {
    float d, h, v, e; cin >> d >> h >> v >> e;
    float PI = 3.14159265359;
    float vol = (PI * pow((0.500000000 * d), 2.00000000) * h)/v;
    //cout << vol << endl;
    //vol = v / vol;
    if (vol <= e) {
        cout << "NO\n"; 
    } else {
        cout << "YES\n"; 
        float res = h / (((4*v)/(PI*pow(d, 2)))-e);
        printf("%.6f\n", res);
    }

    return 0;
}
