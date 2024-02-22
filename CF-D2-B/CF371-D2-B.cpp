#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    int n;
	cin >> n;
	vector<int>arr(n);

	for(int i = 0; i < n; i++) {
		cin >> arr[i];
    }

	sort(arr.begin(), arr.end());

	vector<int>::iterator length;

	length=unique(arr.begin(), arr.end());

	arr.resize(distance(arr.begin(), length));

	if (arr.size() < 3) {
		cout << "YES\n";
    } else if (arr.size() == 3) {
		if (arr[0] + arr[2] == 2*arr[1]) {
			cout << "YES\n";
        } else {
	    cout << "NO\n";
        }
	} else {
		cout << "NO\n";
    }

    return 0;
}
