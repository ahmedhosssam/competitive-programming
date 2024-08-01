#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
using namespace std;

int main() {
    uint64_t n; cin >> n;
    uint64_t x=1378;

    //uint64_t mul=pow(8,n);
    //string str = to_string(mul);
    //cout << str << endl;
    //cout << str[str.length()-1] << endl;
    
    if (n==0) { cout << 1 << endl; }
    else if (n%4 == 1) { cout << 8 << endl; }
    else if (n%4 == 2) { cout << 4 << endl; }
    else if (n%4 == 3) { cout << 2 << endl; }
    else if (n%4 == 0) { cout << 6 << endl; }

    return 0;
}
