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

struct Person {
    int height;
    int weight;
};

bool cmp(Person a, Person b) {
    return a.weight < b.weight;
}

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    */
    int n; cin >> n;
    vector<Person> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].height >> a[i].weight;
    }
    sort(a.begin(), a.end(), cmp);
    cout << "-----\n";
    for(int i = 0; i < n; i++) {
        cout << a[i].height << " " << a[i].weight << endl;
    }
    return 0;
}
