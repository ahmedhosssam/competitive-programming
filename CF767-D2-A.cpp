#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define int long long

int32_t main() {
    int n; cin>>n;
    int arr[n+1];
    bool isVisited[n+1];
    int c = n;

    for (int i = 1; i<=n; i++) {
        cin >> arr[i];
        isVisited[i] = false;
    }
    
    for (int i=1; i<=n ;i++) {
        isVisited[arr[i]] = true;

        while (isVisited[c] && c>0) {
            cout << c << " ";
            c--;
        }
        cout << endl;
    }
    return 0;
}
