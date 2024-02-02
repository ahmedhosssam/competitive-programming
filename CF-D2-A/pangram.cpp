#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string alph = "abcdefghijklmnopqrstuvwxyz";

    int n; cin >> n;
    string str; cin >> str;

    for (char &c : str) {
        c = std::tolower(c);
    }

    int yes = 0;
    for (int i = 0; i < alph.length(); i++) {
        for (int j = 0; j < str.length(); j++) {
            if (alph[i] == str[j]) {
                yes++;
                break;
            }
        }
    }

    if (yes >= 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
