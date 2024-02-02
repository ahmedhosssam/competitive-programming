#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define int long long

int32_t main() {
    char alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<bool> isVis(26, false);
    int res = 0;
    char ch; 
    while (ch != '}') {
        cin >> ch;
        if (ch-'a' >= 0 && ch-'a' <= 25) {
            //cout << ch-'a' << endl;
            if (isVis[ch-'a'] == false) {
                isVis[ch-'a'] = true;
                res++;
            }
        }
    }
    cout << res << endl;

    return 0;
}
