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

// for (int i = 0; i < n; i++) {
int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        k--;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int me = a[k];
        for (int i = 0; i < n; i++) {
            a[i] = a[i]>me;
        }
        int g = 0;
        while(g<n&&a[g]==0) {
            g++;
        }
        if(g > k) {
            cout << g-1 << endl;
            continue;
        }

        int res = max(g-1, 0LL);
        swap(a[k], a[g]);
        k=g;
        g=0;

        while(g<n&&a[g]==0) {
            g++;
        }

        cout << max(res, (k>0)+g-k-1) << endl;
    }
    return 0;
}
/*

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

// http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
template<class Fun> class y_combinator_result {
    Fun fun_;
public:
    template<class T> explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
    template<class ...Args> decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template<class Fun> decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }


template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef NEAL_DEBUG
#define dbg(...) cerr << '[' << __FILE__ << ':' << __LINE__ << "] (" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif


void run_case() {
    int N, K;
    cin >> N >> K;
    K--;
    vector<int> A(N);

    for (auto &a : A)
        cin >> a;

    int me = A[K];

    for (int i = 0; i < N; i++)
        A[i] = A[i] > me;

    int first_one = 0;

    while (first_one < N && A[first_one] == 0)
        first_one++;

    if (K < first_one) {
        cout << first_one - 1 << '\n';
        return;
    }

    int ans = max(first_one - 1, 0);
    swap(A[K], A[first_one]);
    K = first_one;
    first_one = 0;

    while (first_one < N && A[first_one] == 0)
        first_one++;

    ans = max(ans, (K > 0) + first_one - K - 1);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}
*/
