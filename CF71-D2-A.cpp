#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    string strs[n] = {};

    string res[n] = {};

    for (int i=0;i<n;i++) {
        cin >> strs[i];
        if (strs[i].length() > 10) {
            res[i] = strs[i][0];
            string s = to_string(strs[i].length()-2);
            res[i] += s;
            res[i] += strs[i][strs[i].length()-1];
        } else {
            res[i] = strs[i];
        }
    }

    for (int i=0;i<n;i++) {
        cout << res[i] << endl;
    }

    return 0;
}
