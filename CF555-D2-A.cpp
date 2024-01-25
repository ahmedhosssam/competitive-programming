#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    string str;
    cin >> str;

    int zeros = 0;
    int ones = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == '0') {
            zeros++;
        } else {
            ones++;
        }
    }

    cout << abs(zeros-ones) << endl;

    return 0;
}
