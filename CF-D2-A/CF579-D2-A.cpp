#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    int res = 0;

    while (n > 0) {
        if (n%2==1) { res++; }
        n = n/2;
    }
    cout << res << endl;

    return 0;
}
