#include <iostream>
#include <cstdint>
#include <cmath>
#include <cstdlib>

using namespace std;

uint64_t gcd(uint64_t a, uint64_t b) {
    if (a%b == 0) { return b; }
    return gcd(b, a % b);
}

int main() {
    uint64_t a;
    uint64_t b;
    cin >> a;
    cin >> b;

    if (a%2 != 0) { a++; }

    if ((b-a)<2 || (a-b)<2) {
            cout << "-1\n";
    } else {
        cout << a << " " << a+1 << " " << a+2 << endl;
    }

    /*
    for (uint64_t i = a+1; i < b; i++) {
        if (gcd(i, a) == 1 && gcd(b, i) == 1) {
            c = i;
        }
    }

    if (c != -69) {
        cout << a << " " << c << " " << b << endl;
    } else {
        cout << -1 << endl;
    }
   
    */

    return 0;
}
