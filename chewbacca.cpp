#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    vector<int> res;

    for (int i = 0; i < str.length(); i++) {
        int n = int(str[i])-48;
        int t = 9 - n;
        if (i == 0 && n == 9) {
            res.push_back(9);
        } else  if (t<n) {
            res.push_back(t);
        } else {
            res.push_back(n);
        }
    }

    for (int i = 0; i < res.size(); i++) {
        cout << res[i];
    }
    cout << endl;

    return 0;
}
