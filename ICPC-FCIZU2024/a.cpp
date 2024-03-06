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
    string str; cin >> str;
    int res = 0;
    for (int i = 0; i < str.length(); i++) {
        res += str[i]-'0';
    }
    cout << res << endl;
    return 0;
}
