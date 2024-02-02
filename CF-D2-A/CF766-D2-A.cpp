#include <iostream>
#include <string>
using namespace std;

int main() {
    string a; cin >> a;
    string b; cin >> b;

    if (a.length() == b.length()) {
        if (a == b) {
            cout << "-1\n";
        } else {
            cout << a.length() << endl;
        }
    }
    else if (a.length() != b.length()) {
        (a.length() > b.length()) ? cout << a.length() : cout << b.length();
        cout << endl;
    }

    return 0;
}
