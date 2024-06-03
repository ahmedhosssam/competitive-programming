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

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    string s1; cin >> s1;
    string s2; cin >> s2;
    string s3; cin >> s3;
    int x = 0;
    int y = 0;
    if(s1[0]==s1[1]&&s1[1]==s1[2]) {
        x++;
    }
    if(s2[0]==s2[1]&&s2[1]==s2[2]) {
        x++;
    }
    if(s3[0]==s3[1]&&s3[1]==s3[2]) {
        x++;
    }
    if(s1[0]==s2[0]&&s2[0]==s3[0]) {
        x++;
    }
    if(s1[1]==s2[1]&&s2[1]==s3[1]) {
        x++;
    }
    if(s1[2]==s2[2]&&s2[2]==s3[2]) {
        x++;
    }
    if(s1[0]==s2[1]&&s2[1]==s3[2]) {
        x++;
    }
    if(s1[2]==s2[1]&&s2[1]==s3[0]) {
        x++;
    }

    set<char> s;
    s.insert(s1[0]);
    s.insert(s1[1]);
    s.insert(s1[2]);
    if(s.size()==2) {
        y++;
    }
    s.clear();
    s.insert(s2[0]);
    s.insert(s2[1]);
    s.insert(s2[2]);
    if(s.size()==2) {
        y++;
    }
    s.clear();
    s.insert(s3[0]);
    s.insert(s3[1]);
    s.insert(s3[2]);
    if(s.size()==2) {
        y++;
    }
    s.clear();
    s.insert(s1[0]);
    s.insert(s2[0]);
    s.insert(s3[0]);
    if(s.size()==2) {
        y++;
    }
    s.clear();
    s.insert(s1[1]);
    s.insert(s2[1]);
    s.insert(s3[1]);
    if(s.size()==2) {
        y++;
    }
    s.clear();
    s.insert(s1[2]);
    s.insert(s2[2]);
    s.insert(s3[2]);
    if(s.size()==2) {
        y++;
    }
    s.clear();
    s.insert(s1[0]);
    s.insert(s2[1]);
    s.insert(s3[2]);
    if(s.size()==2) {
        y++;
    }
    s.clear();
    s.insert(s3[0]);
    s.insert(s2[1]);
    s.insert(s1[2]);
    if(s.size()==2) {
        y++;
    }
    cout << x << endl;
    cout << y << endl;
    return 0;
}
