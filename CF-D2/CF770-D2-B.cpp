#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long

// for (int i = 0; i < n; i++) {
int32_t main() {
    string n; cin >> n;
    string x = n;
    for(int i = n.size()-1; i > 0; i--) {
        n[i]='9';
        n[i-1]--;
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < n.size();i++) {
            sum1+=n[i]-'0';
            sum2+=x[i]-'0';
        }
        if(sum2<sum1) {
            x=n;
        }
    }
    cout << stoll(x) << endl;
    return 0;
}
