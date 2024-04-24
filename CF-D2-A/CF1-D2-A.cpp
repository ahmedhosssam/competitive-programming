#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long double n, m, a; cin >> n >> m >> a;
     //x = m/a;
     //y = n/a;
    cout << (long long)(ceil(m/a)*ceil(n/a)) << endl;
    return 0;
}
