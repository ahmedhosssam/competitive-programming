#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define int long long

int32_t main() {
    int n; cin >> n;
    int arr[n][2] = {};

    for (int i =0; i <n; i++) {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    bool sorted = true;
    bool changed = false;

    for (int i =0; i <n; i++) {
        if (arr[i][0] != arr[i][1]) {
            changed = true;
            break;
        }
    }

    for (int i =0; i <n-1; i++) {
        if (arr[i][0] < arr[i+1][0]) {
            sorted = false;
            break;
        }
    }

    if (sorted && !changed) {
        cout << "maybe\n";
    } else if (changed) {
        cout << "rated\n";
    } else if (!sorted) {
        cout << "unrated\n";
    }

    return 0;
}
