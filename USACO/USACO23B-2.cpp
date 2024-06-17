#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
#define int long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define frr(i, a, b) for(int i = a; i <= b; i++)
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";}
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

// Each cow occupies a range [si-st]. They are all disjoint
// Cow i must be cooled by ci, meaning that the range [si-st] must be reduced by ci.
// Each cond costs mi to operate.
// Each cond --> ai, bi, pi, mi
// If I want to do it "recusionly":
/*
void search(c, m, cost, x) {
    if (x == m) {
        res = min(res, cost);
        return;
    }
    for (i : cows) {
        for (j : cond) {
            if (ai[j]<=si[i]&&bi[j]>=st[i] && pi[j]>=ci[i] && i!=c && j!=m) {
                search(i, j, cost+mi[j], x+1);
            }
        }
    }
}
*/

int res = INT_MAX;
// for cow
int si[20];
int st[20];
int ci[20];
// for cond;
int ai[10];
int bi[10];
int pi[10];
int mi[10];

int N;
int M;

void search(int n = 0, int m = 0, int cost = 0, int x = 0) {
    if (x==M) {
        res = min(res, cost);
        return;
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if (pi[j]>=ci[i] && i!=n && j!=m) {
                search(i, j, cost+mi[j], x+1);
            }
        }
    }
}

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> si[i] >> st[i] >> ci[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> ai[i] >> bi[i] >> pi[i] >> mi[i];
    }
    for (int b = 0; b < (1<<M); b++) {
        vector<int> s;
        int cs = 0;
        int cost = 0;
        for (int i = 0; i < M; i++) {
            if (b&(1<<i)) s.push_back(i);
        }
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < s.size(); j++) {
                if (pi[s[j]]>=ci[i]) {
                    cs++;
                    cost+=mi[s[j]];
                    //cout << s[j] << endl;
                }
            }
        }
        if (cs==N) {
            res = min(res, cost);
        }
    }
    cout << res << endl;
    
    return 0;
}
