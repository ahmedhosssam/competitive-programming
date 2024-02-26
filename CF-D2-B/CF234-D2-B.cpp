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
    int n, m;
    cin >> n >> m;
    int min = 6969;
    string str;
    vector<int> arr;
    bool yes = true;
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < m; j++) {
            if (str[j]=='G') {
                for (int k = j+1; k < m; k++) {
                    if (str[k]=='S') {
                        arr.push_back(abs(j-k));
                        break;
                    }
                }
                break;
            } else if (str[j]=='S') {
                yes = false;
            }
        }
    }
    if (yes) {
        sort(arr.begin(), arr.end());
        auto it = unique(arr.begin(), arr.end());
        arr.erase(it, arr.end());
        cout << arr.size() << endl;
        /*
        for (auto& element : arr) {
            cout << element << " ";
        }
        */
    } else {
        cout << "-1\n";
    }
    return 0;
}
