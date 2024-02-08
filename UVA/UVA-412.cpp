#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define int long long

int gcd(int a, int b) {
    if (a%b == 0) { return b; }
    return gcd(b, a % b);
}

int32_t main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        double t = 0;
        double comb = 0;
        double arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                comb++;
                if (gcd(max(arr[i], arr[j]), min(arr[i], arr[j])) == 1) {
                    t++;
                    //cout << "arr[i] = " << arr[i] << " && arr[j] = " << arr[j] << " t = " << t << endl;
                }
            }
        }

        if (t != 0) {
            //cout << "6*n= " << 6.000*n << endl;
            //cout << "t = " << t << endl;

            double res = sqrt((6.000000*double(comb))/double(t));
            //cout << setprecision(7) << res << endl;
            printf("%0.6f\n", res);
        } else {
            cout << "No estimate for this data set.\n";
        }
    }
    return 0;
}
