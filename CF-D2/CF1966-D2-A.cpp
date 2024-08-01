#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int k; cin >> k;
		vector<int> a(n);
		vector<int> vis(101, 0);
                bool ok = false;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			vis[a[i]]++;
                        if(vis[a[i]]>=k) {
				ok=true;
			}
		}
		if (ok) {
			cout << k-1 << endl;
		} else {
			cout << n << endl;
		}
	}
	return 0;
}
