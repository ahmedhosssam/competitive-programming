#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define int long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define frr(i, a, b) for(int i = a; i <= b; i++)
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);
    */

    // Bessie  9
    // Elsie   7
    // Mildred 7

    // 1 Bessie +2
    // 4 Elsie -1
    // 7 Mildred +3
    // 9 Mildred -1
    int n; cin >> n;
    vector<pair<int, pair<string, pair<char, int>>>> a;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        string name; cin >> name;
        char sign; cin >> sign;
        int num; cin >> num;
        a.pb({x, {name, {sign, num}}});
    }
    sort(a.begin(), a.end());
    map<string, int> mp;
    mp["Mildred"]=7;
    mp["Elsie"]=7;
    mp["Bessie"]=7;
    string cur;
    int res = 1;
    if (a[0].S.S.F=='+') {
        mp[a[0].S.F]+=a[0].S.S.S;
    } else {
        mp[a[0].S.F]-=a[0].S.S.S;
    }
    if (mp["Bessie"]>mp["Mildred"]&&mp["Bessie"]>mp["Elsie"]) {
        cur = "Bessie";
    } else if (mp["Mildred"]>mp["Bessie"]&&mp["Mildred"]>mp["Elsie"]) {
        cur = "Mildred";
    } else {
        cur = "Elsie";
    }
    //cur = a[0].S.F;
    for(int i = 1; i < n; i++) {
        string name = a[i].S.F;
        char sign = a[i].S.S.F;
        int num = a[i].S.S.S;
        if (sign == '+') {
            mp[name]+=num;
        } else {
            mp[name]-=num;
        }
        if (mp[name]>mp[cur]&&name!=cur) {
            res++;
            cur = name;
        }
        //cout <m< name << " " << sign << " " << num << endl;
    }
    cout << res << endl;
    return 0;
}
