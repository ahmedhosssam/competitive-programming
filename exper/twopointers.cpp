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
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";}
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

vector<int> a;

void two_sum(int n, int x) {
    sort(all(a));
    int s = a[0]+a[n-1];
    int i = 0;
    int j = n-1;
    while (i<j) {
        if (s==x) {
            break;
        }
        if (s<x) {
            s-=a[i];
            i++;
            s+=a[i];
        }
        if (s>x) {
            s-=a[j];
            j--;
            s+=a[j];
        }
    }
    if (s==x) {
        printf("%d, %d\n", a[i], a[j]);
    } else {
        cout << "Nope\n";
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
    int n; cin >> n;
    int sum; cin >> sum;
    a = vector<int>(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int s = a[0]+a[1];
    int i = 0;
    int j = 1;
    two_sum(n, sum);
    while (i < j) {
        if (s==sum) {
            break;
        }
        if (s<sum) {
            j++;
            s+=a[j];
        }
        if (s>sum) {
            s-=a[i];
            i++;
        }
    }
    if (s==sum) {
        for(int x = i; x <= j; x++) {
            cout << a[x] << " ";
        }
        cout << endl;
    } else {
        cout << "Nope\n";
    }
    return 0;
}
