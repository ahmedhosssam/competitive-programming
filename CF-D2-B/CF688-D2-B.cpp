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
    cout << str;
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}
