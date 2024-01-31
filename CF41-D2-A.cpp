#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s; string sr;
    cin >> s; cin >> sr;
    reverse(s.begin(), s.end());
    cout << (s == sr ? "YES\n" : "NO\n");
    return 0;
}
