#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define int long long

int gcd(int a, int b) {
    if (a%b == 0) { return b; }
    return gcd(b, a % b);
}

int32_t main() {
    int t; cin>>t;
    int arr[t][2];

    for (int i=0;i<t;i++) {
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    for (int i=0;i<t;i++) {
        int k = arr[i][0] / arr[i][1];
        float r = k - arr[i][0] % arr[i][1];

        if (arr[i][0] == arr[i][1]) {
            cout << 1;
        }
        else if (r>1) {
            //cout << "r=" << r << endl;
            int val = k;
            vector<int> narr(k);
            fill(narr.begin(), narr.end(), k-1);
            while (true) {
                int sum = 0;
                for (int j=0; j<narr.size();j++) {
                    sum += narr[j];
                }
                sort(narr.begin(), narr.end());
                if (sum <= arr[i][0]) {
                    cout << "yeah\n";
                    cout << narr[0];
                    break;
                } else {
                    narr[0]--;
                }
            }
        } else {
            cout << k;
        }

        cout << endl;
    }

    return 0;
}
