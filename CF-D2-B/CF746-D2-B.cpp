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
    string str; cin >> str;

    if (str.length() <= 2) {
        cout << str << endl;
    } else {
        int j = str.length() - 3;
        while (j >= 0) {
            int c = (j+str.length()-1)/2;
            // shifting
            for (int i = j; i < c; i++) {
                char tmp = str[i];
                str[i] = str[i+1];
                str[i+1] = tmp;
            }
            j--;
        }
        cout << str << endl;
    }

    return 0;
}
