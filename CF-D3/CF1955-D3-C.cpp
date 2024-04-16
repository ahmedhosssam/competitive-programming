#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int k; cin >> k;
        int sum = 0;
        deque<int> dq(n);
        for(int i = 0; i < n; i++) {
            cin >> dq[i];
            sum+=dq[i];
        }
        if (k>=sum) {
            cout << n << endl;
            continue;
        }

        int l=0;
        int r=n-1;
        int res = 0;
        while(dq.size()>1&&k) {
            int m = min(dq.front(), dq.back());
            if(k>=2*m) {
                dq.front() -= m;
                dq.back() -= m;
                k -= 2*m;
            } else {
                dq.front() -= k/2+k%2;
                dq.back() -= k/2;
                k=0;
            }
            if (dq.front()==0) {
                dq.pop_front();
            }
            if (dq.back()==0) {
                dq.pop_back();
            }
        }
        cout << n-dq.size() + (dq.size() && dq.front() <= k) << endl;
    }
    return 0;
}
