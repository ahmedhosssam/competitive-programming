#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "12345678";
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
    return 0;
}
