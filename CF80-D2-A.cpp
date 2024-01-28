#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define int long long

int32_t main() {
    int n, m;
    cin >> n >> m;

    int prime[26] = {
  2,
  3,
  5,
  7,
  11,
  13,
  17,
  19,
  23,
  29,
  31,
  37,
  41,
  43,
  47,
  53,
  59,
  61,
  67,
  71,
  73,
  79,
  83,
  89,
  97,
  101};

    string res = "NO";

    for (int i = 0;i < 25; i++) {
        if (prime[i] == n) {
            if (prime[i+1] == m) {
                res = "YES";
                break;
            }
        }
    }

    cout << res << endl;
    return 0;
}
