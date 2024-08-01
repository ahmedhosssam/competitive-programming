#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long

int32_t main() {
    string s1; cin >> s1;
    string s2; cin >> s2;
    vector<int> arr;
    int cnt = 0;
    for (int i=0;i < min(s1.length(),s2.length()); i++) {
        if (s1[i]!=s2[i]) {
            cnt++;
            arr.push_back(i);
        }
    }
    if(s1.length()!=s2.length()) {
        cout << "NO\n";
    } else {
        swap(s1[arr[0]], s1[arr[1]]);
        if (s1!=s2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
