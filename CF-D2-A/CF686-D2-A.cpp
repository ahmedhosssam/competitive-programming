#include <iostream>
using namespace std;

int main() {
    long long n; cin >> n;
    long long x; cin >> x; // ice cream num

    char sign[n] = {};
    long long num[n] = {};
    for (long long i = 0; i < n; i++) {
        cin >> sign[i];
        cin >> num[i];
    }

    int d = 0;

    for (long long i = 0; i < n; i++) {
        if (sign[i] == '+') {
            x += num[i];
        }
        if (sign[i] == '-') {
            if (x-num[i] < 0) {
                d++;
                continue;
            } else {
                x -= num[i];
            }
        }
    }

    cout << x << " " << d << endl;
}
