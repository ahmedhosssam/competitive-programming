#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	bool test = true;
	int arr[n] = {};
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] != 0) {
			test = false;
		}
	}

	test ? cout << "EASY\n" : cout << "HARD\n";

	return 0;
}
