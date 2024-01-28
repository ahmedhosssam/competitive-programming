#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define int long long

int32_t main() {
    int y, w;
    cin >> y >> w;
    int mx = max(y, w);
    vector<int> arr;

    for (int i =mx; i<=6;i++) {
        arr.push_back(i);
    }

    double s = arr.size()/6.000000;

    if (s==1.0000/6.0000) {
        cout << "1/6\n";
    } else if (s==2.0000/6.0000) {
        cout << "1/3\n";
    } else if (s==3.0000/6.0000) {
        cout << "1/2\n";
    } else if (s==4.0000/6.0000) {
        cout << "2/3\n";
    } else if (s==5.0000/6.0000) {
        cout << "5/6\n";
    } else if (s==6.0000/6.0000) {
        cout << "1/1\n";
    } else {
        cout << "0/1\n";
    }

    return 0;
}
