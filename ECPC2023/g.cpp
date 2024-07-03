// ï·½
// Contest: The 2023 ICPC Egyptian Collegiate Programming Contest (Qualifications Day 6)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/532378/problem/G
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 03 Jul 2024 12:28:32 PM EEST
//
#include <bits/stdc++.h>
using namespace std;
#ifdef MOHAMED
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define pii pair<int,int>
#define OO 2e9
#define endl "\n"
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1};
const int dy[]{1, 0, -1, 0, -1, 1, -1, 1};

template <typename T> istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data)
    input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {

  for (const T &x : data)
    output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
vector<vi>adj,emptyAdj;
vector<bool>visited;
vi arr;
set<int>st;
void dfs(int node){
  if(visited[node])return;
  visited[node]=true;
  for(auto&it:adj[node]){
    st.insert(arr[it]);
    dfs(it);
  }
}
void solve() {
  int n;cin>>n;
  arr.resize(n);
  cin>>arr;
  adj.resize(n);
  visited.resize(n);
  for(int i=0;i<n-1;++i){
    int a,b;
    cin >> a >> b;
    a--,b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  int ans=0;
  for(int i = 0;i<n;++i){
    if(!visited[i]){
      dfs(i);
      // ans=min(ans,(int)st.size());
      ans+=st.size();
      st.clear();
    }
  }
  cout << ans << endl;
  visited.clear();
}
int32_t main() {
  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  int t = 1;
  cin>>t;
  while (t--){
    solve();
    adj = emptyAdj;
  }
  return 0;
}
