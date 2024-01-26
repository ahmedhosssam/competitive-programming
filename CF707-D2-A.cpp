#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    int m; cin >> m;

    char arr[n][m];

    string res = "#Black&White";

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> arr[i][j];
            if (arr[i][j] != 'B'
            && arr[i][j] != 'G'
            && arr[i][j] != 'W'
            ) {
                res = "#Color";
            }
        }
    }

    cout << res << endl;

    return 0;
}
