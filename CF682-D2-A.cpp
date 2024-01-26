#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    int m; cin >> m;

    int res = 0;

    int x = (n > m) ? n : m;
    int y = (n < m) ? n : m;

    for (int i = 1; i <= x; i++) {
        for (int j = 5-i%5; j <= y; j += 5) {
            cout << i << " " << j << endl;
            if ((i+j)%5 ==0) {
                res++;
            }
        }
    }

    cout << res << endl;

    return 0;
}
