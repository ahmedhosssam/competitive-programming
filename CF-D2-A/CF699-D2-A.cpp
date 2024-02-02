#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    string str; cin >> str;
    long long arr[n] = {};

    for (long long i=0;i<n;i++) {
        cin >> arr[i];
    }

    long long  res = -1;
    long long max = 9223372036854775800;
    for (long long i=0;i<n;i++) {
        if (str[i] == 'R' && str[i+1] == 'L') {
            long long x = (arr[i+1]-arr[i])/2;
            if (x<max) {
                max = x;
            }
        }
    }

    if (max != 9223372036854775800) { res = max; }
    cout << res << endl;

    return 0;
}
