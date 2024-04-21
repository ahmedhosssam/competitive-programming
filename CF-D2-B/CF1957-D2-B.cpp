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

// for(int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    vector<int> g(1000000, 0);
    vector<int> bf(1000000, 0);
    g[0]=1;
    int j = 2;
    for(int i = 0; i < bf.size(); i++) {
        bf[i]=pow(2,i);
    }
    for(int i = 1; i < g.size(); i++) {
        g[i]=g[i-1]+j;
        j*=2;
    }
    while(t--) {
        int n, k; cin >> n >> k;
        
        int o = n;
        int sum = k;
        vector<int> arr;
        bool ok = false;
        if(n==1) {
            cout << k << endl;
            continue;
        }
        for(int i = 0; i < bf.size(); i++) {
            if(k==bf[i]-1) {
                ok=true;
                break;
            }
        }
        if(ok) {
            cout << k << " ";
            for(int i = 0; i < n-1; i++) {
                cout << 0 << " ";
            }
            cout << endl;
            continue;
        }
        for(int i = 0; i < n; i++) {
            o--;
            if(o==0) {
                break;
            }
            if(g[i]>k) {
                //cout << k << " ";
                arr.push_back(k);
                k=0;
                break;
            }
            arr.push_back(g[i]);
            //cout << g[i] << " ";
            k-=g[i];
        }
        sort(arr.begin(), arr.end());
        if(k>0) {
            /*
            if(o==0) {
                arr[0]+=k;
            } else {
                arr.push_back(k);
                o--;
            }
            */
            arr.push_back(k);
            o--;
        }
        for(int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        while(o>0) {
            cout << 0 << " ";
            o--;
        }
        cout << endl;
    }
    return 0;
}
