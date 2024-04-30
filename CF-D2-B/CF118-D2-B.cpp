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
    for(int i = -n; i <= n; i++) {
        int spaces = abs(i);
        for(int j = 0; j < spaces; j++) {
            cout << "  ";
        }
        for(int j = 0; j < abs(n-spaces); j++) {
            cout << j << " ";
        }
        for(int j = abs(n-spaces); j >= 0; j--) {
            cout << j;
            if(j!=0) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
