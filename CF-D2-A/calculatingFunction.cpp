#include <iostream>
#include <string>
#include <cstdint>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    int64_t n;
    cin >> n;

    int64_t out = 0;

    if (n%2 != 0) {
        cout << -(n+1)/2 << endl;
    } else {
        cout << (n/2) << endl;
    }

    return 0;
}
