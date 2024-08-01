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
    int t; cin >> t;
    int n;
    while (t--) {
        cin >> n;
        int arr[3] = {0, 0, 0};
        if (n > 26) {
            int x = 2;
            arr[0] = 1;
            arr[1] = 1;
            arr[2] = 1;
            n-=3;
            while(n--) {
                if (arr[x] == 26) {
                    x--;
                }
                arr[x]++;
                //cout << arr[x] << endl;
            }
        } else {
            arr[0] = 1;
            arr[1] = 1;
            arr[2] = n-2;
        }
        cout << char(96+arr[0]) << char(96+arr[1]) << char(96+arr[2]) << endl;
    }
    return 0;
}
