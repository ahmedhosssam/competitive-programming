#include <iostream>
#include <string>
using namespace std;

bool is_contains_zero(int n) {
	string num = to_string(n);

	for (int i = 0; i < num.length(); i++) {
		if (num[i] == '0') {
			return true;
		}
	}
	return false;
}

bool is_good_k(int n, int k) {
	string num = to_string(n);
	int temp;
	int testK = 0;

	for (int i = 0; i < num.length(); i++) {
		temp = num[i] - 48;
		if (temp <= k && temp >= 0) {
			testK++;
		}
	}
	if (testK == num.length() && is_contains_zero(n)) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	int arr[n] = {};

	int res = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (is_good_k(arr[i], k)) { res++; }
	}

	cout << res << endl;
	return 0;
}
