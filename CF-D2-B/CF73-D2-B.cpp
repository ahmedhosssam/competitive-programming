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
    int n; cin >> n;
    string str = "";
    for (int i = 0;i < n; i++) {
        if (i%2==0) {
            str+='W';
        } else {
            str += 'B';
        }
    }
    char g;
    if (n%2==0) {
        g = 'W';
    } else {
        g = 'B';
    }
    for (int i = 0; i < n; i++) {
        if (i%2==0) {
            cout << str << endl;
        } else {
            cout << str.substr(1);
            cout << g << endl;
        }
    }
    return 0;
}
