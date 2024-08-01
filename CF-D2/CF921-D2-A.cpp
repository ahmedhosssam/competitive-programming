#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define int long long

int32_t main() {
    char alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int t; cin >> t;
    int arr[t][2];
    for (int i=0;i<t;i++) {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    for (int i=0;i<t;i++) {
        int x = arr[i][0]; // combinations
        int y = 0;
        while (x > 0) {
            for (int j = y; j < y+arr[i][1]; j++) {
                //cout << endl << "j = " << j << endl;
                cout << alph[j%arr[i][1]];
            }
            y++;
            x--;
        }
        cout << endl;
    }

    return 0;
}
