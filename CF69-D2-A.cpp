#include <iostream>
using namespace std;

int main() {
    int n; cin >>n;
    int arrx[n];
    int arry[n];
    int arrz[n];

    int sumx = 0;
    int sumy = 0;
    int sumz = 0;

    for (int i =0 ; i<n; i++) {
        cin >> arrx[i]; sumx += arrx[i];
        cin >> arry[i]; sumy += arry[i];
        cin >> arrz[i]; sumz += arrz[i];
    }

    if (sumx == 0
       && sumy == 0
       && sumz == 0)
    {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
