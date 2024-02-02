#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    long long n;
    while(true) {
        cin>>n;
        if (n == 0) { break;}

        if (sqrt(n) == static_cast<int>(sqrt(n))) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }

        //toggle ? cout << "yes\n" : cout << "no\n";
    }

    return 0;
}
