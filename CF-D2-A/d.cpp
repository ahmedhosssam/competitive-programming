#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
#define int long long
 
int32_t main() {
    string str;
    cin >> str;

    vector<int> arr(str.size(), 0);
    int x = str.size();
    //int arr[x] = {0};
    for (int i = 1; i < x; i++) {
        if (str[i] == str[i - 1]) {
            arr[i] = 1;
        }
    }

    for (int i = 1; i < str.size(); i++) {
        arr[i] += arr[i - 1];
    }

    int q;
    cin >> q;

    int l, r;
    for(int i = 0; i < q; i++) {
        cin >> l >> r;
        cout << arr[r-1] - arr[l-1] << endl;
    }

    return 0;
}
