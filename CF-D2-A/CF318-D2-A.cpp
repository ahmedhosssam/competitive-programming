#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long
using namespace std;

int32_t main() {
    int n; cin >> n;
    int k; cin >> k;
    vector<int> arr;

    if (k <= (n+1)/2) {
        cout << 2*k-1 << endl;
    } else {
        cout << 2*(k-((n+1)/2)) << endl;
    }

    return 0;
}
