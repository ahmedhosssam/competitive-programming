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

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        //vector<vector<int>> arr(n, vector<int>(n, 0));
        int arr[n][n];

        int m = 0;
        int sum = 0;

        for(int i = 0; i<n; i++) {
            for(int j = 0; j<n; j++) {
                arr[i][j] = i+1;
                sum+=arr[i][j];
            }
            m++;
        }

        sum-=n;
        sum+= (n*(n+1))/2;

        if (m>1) { m++; }
        cout << sum << " " << m << endl;
        if (n==1) {
            cout << 1 << " " << 1 << " " << 1 << endl;
            continue;
        }
        int x=1;
        for(int j = 0; j<n; j++) {
            if (n*(j+1)>((j+1)*(j+2))/2 && n>1) {
                cout << 1 << " " << j+1 << " ";
                for(int k = 0; k<n; k++) {
                    cout << arr[k][j] << " ";
                }
            } else {
                cout << 2 << " " << j+1 << " ";
                for(int k = 1; k<=j; k++) {
                    cout << k << " ";
                }
            }
            cout << endl;
        }
        if(m>1) {
            cout << 2 << " " << 1 << " ";
            for(int j = 1; j<=n; j++) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
