#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";}
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

// If one vertex can both reach and be reached by all others, then every vertex in this grah can reach all others.
//
// can[u][v] is true if you can reach v from u through dfs
//
// Let's define a reverse graph where u-->v becomes v-->u, so, if can[1][x]

int n, m;
vector<vector<int>> adj1;
vector<vector<int>> adj2;
vi vis1(n+1, 0);
vi vis2(n+1, 0);

void dfs1(int x) {
    vis1[x]=1;
    for(int g : adj1[x]) {
        if (!vis1[g]) { dfs1(g); }
    }
}

void dfs2(int x) {
    vis2[x]=1;
    for(int g : adj2[x]) {
        if (!vis2[g]) { dfs2(g); }
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
    cin >> n >> m;
    adj1 = vector<vector<int>>(n+1);
    adj2 = vector<vector<int>>(n+1);
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        adj1[x].pb(y);
        adj2[y].pb(x);
    }
    dfs1(1);
    for(int i = 1; i <= n; i++) {
        if (!vis1[i]) {
            cout << "NO\n";
            cout << 1 << " " << i << endl;
            return 0;
        }
    }
    dfs2(1);
    for(int i = 1; i <= n; i++) {
        if (!vis2[i]) {
            cout << "NO\n";
            cout << i << " " << 1 << endl;
            return 0;
        }
    }
    cout << "YES\n" << endl;
    return 0;
}


/*
Pre-submit:
Write a few simple test cases if sample is not enough.
Are time limits close? If so, generate max cases.
Is the memory usage fine?
Could anything overflow?
Make sure to submit the right file.

Wrong answer:
Print your solution! Print debug output, as well.
Are you clearing all data structures between test cases?
Can your algorithm handle the whole range of input?
Read the full problem statement again.
Do you handle all corner cases correctly?
Have you understood the problem correctly?
Any uninitialized variables?
Any overflows?
Confusing N and M, i and j, etc.?
Are you sure your algorithm works?
What special cases have you not thought of?
Are you sure the STL functions you use work as you think?
Add some assertions, maybe resubmit.
Create some testcases to run your algorithm on.
Go through the algorithm for a simple case.
Go through this list again.
Explain your algorithm to a teammate.
Ask the teammate to look at your code.
Go for a small walk, e.g. to the toilet.
Is your output format correct? (including whitespace)
Rewrite your solution from the start or let a teammate do it.

Runtime error:
Have you tested all corner cases locally?
Any uninitialized variables?
Are you reading or writing outside the range of any vector?
Any assertions that might fail?
Any possible division by 0? (mod 0 for example)
Any possible infinite recursion?
Invalidated pointers or iterators?
Are you using too much memory?
Debug with resubmits (e.g. remapped signals, see Various).

Time limit exceeded:
Do you have any possible infinite loops?
What is the complexity of your algorithm?
Are you copying a lot of unnecessary data? (References)
How big is the input and output? (consider scanf)
Avoid vector, map. (use arrays/unordered_map)
What do your teammates think about your algorithm?

Memory limit exceeded:
What is the max amount of memory your algorithm should need?
Are you clearing all data structures between test cases?
*/
