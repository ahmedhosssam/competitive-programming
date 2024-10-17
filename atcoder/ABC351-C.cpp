#include <bits/stdc++.h>
using namespace std;

#define int long long

// for (int i = 0; i < n; i++) {
int32_t main() {
    int n; cin >> n;
    vector<int> s;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.push_back(x);
        while(s.size()>=2) {
            int x = s[s.size()-2];
            int y = s[s.size()-1];
            if (x==y) {
                s.pop_back();
                s.back()++;
            } else {
                break;
            }
        }
    }
    cout << s.size() << endl;
    return 0;
}
