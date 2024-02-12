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
    int n; cin >> n;
    string str = "ROYGBIV";
    int i = 0;
    string res = "";
    while (n--) {
        res += str[i];
        i++;
        if (i == 7) {
            i = 3;
        }
    }
    cout << res << endl;
    return 0;
}
