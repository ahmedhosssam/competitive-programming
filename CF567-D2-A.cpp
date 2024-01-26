#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    int xs[n] = {};
    for (int i=0;i<n;i++) {
        cin >> xs[i];
    }


    int arr[n][2] = {};

    // first and last points
    arr[0][0] = sqrt(pow(xs[0]-xs[1], 2));
    arr[0][1] = sqrt(pow(xs[0]-xs[n-1], 2));

    arr[n-1][0] = sqrt(pow(xs[n-1]-xs[n-2], 2));
    arr[n-1][1] = sqrt(pow(xs[n-1]-xs[0], 2));
    // ----------------

    cout << arr[0][0] << " " << arr[0][1] << endl;

    for (int i=1;i<n-1;i++) {
        int firstmin = sqrt(pow(xs[i]-xs[i+1], 2));
        int secmin = sqrt(pow(xs[i]-xs[i-1], 2));

        arr[i][0] = (firstmin < secmin) ? firstmin : secmin;

        int firstmax = sqrt(pow(xs[i]-xs[0], 2));
        int secmax = sqrt(pow(xs[i]-xs[n-1], 2));
        arr[i][1] = (firstmax > secmax) ? firstmax : secmax;

        cout << arr[i][0] << " " << arr[i][1] << endl;
    }

    cout << arr[n-1][0] << " " << arr[n-1][1] << endl;

    return 0;
}
