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
    vector<int> arr(n);
    for (int i = 0;i<n;i++) {
        cin >> arr[i];
    }

    vector<int> ar = arr;
    sort(ar.begin(), ar.end());

    int x = 0;
    int y = 0;
    for (int i = 0;i<n;i++) {
        if (arr[i] != ar[i]) {
            x = i;
            break;
        }
    }
   
    for (int i = n-1;i>=0;i--) {
        if (arr[i] != ar[i]) {
            y = i;
            break;
        }
    }

    //cout << x << " " << y << endl;

    reverse(arr.begin()+x, arr.begin()+y+1);
    /*
    for (int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
    */
    if (is_sorted(arr.begin(), arr.end())) {
        cout << "yes\n";
        cout << x+1 << " " << y+1 << endl;
    } else {
        cout << "no\n";
    }
    

    return 0;
}
