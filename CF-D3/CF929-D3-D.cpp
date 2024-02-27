#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
#include <map>
#include <queue>
#include <unordered_map>
using namespace std;

#define int long long

/*
void r(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size()-2; i++) {
        if (arr[i] == arr[i+1]) {
            if (i != 0) {
                swap(arr[i], arr[i-1]);
            } else {
                swap(arr[i], arr[i+2]);
            }
        }
    }
}

void r(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size()-1; i++) {
        if (arr[i] == arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }
}
*/

void r(vector<int> &arr, int N) {

    map<int, int>mp, visited;

    for(int i = 0; i < N; i++) {
        mp[arr[i]]++;
    }

    priority_queue<pair<int, int>>pq;

    for(int i = 0; i < N ; i++) {
        int val = arr[i];

        if (mp[val] > 0 and visited[val] != 1) {
            pq.push({mp[val], val});
        }
        visited[val] = 1;
    }

    vector<int>result(N);

    pair<int, int>prev = { -1, -1 };
    int l = 0;

    // Traverse queue
    while (pq.size() != 0)
    {

        pair<int,int>k = pq.top();
        pq.pop();
        result[l] = k.second;

        if (prev.first > 0) {
            pq.push(prev);
        }

        k.first--;
        prev = k;
        l++;
    }
    arr = result;
}

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int g = a[0];
        bool gg = true;
        r(a, a.size());
        reverse(a.begin(), a.end());
        for (int i = 1; i < a.size(); ++i) {
            if (a[i] == 0) {
                gg = false;
                break;
            }
            //cout << a[i] << " << " << endl;
            g = g%a[i];
            //cout << a[i] << " ";
        }

        /*
        for (int i = 0; i < a.size(); ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
        */

        if (a.size() == 0 || a.size() == 1 || !gg) {
            cout << "NO\n";
            continue;
        }
        if (g != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
