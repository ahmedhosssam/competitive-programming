#include <iostream>
using namespace std;

int main() {
	bool isPossible = true;
	int n = 0;
	cin >> n;
	
	int arr[n] = {};

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	if (n == 1) {
		isPossible = true;
	} else {
		for (int i = 0; i < n; i++) {
			int c = 0;
			for (int j = 0; j < n; j++) {
				if (arr[i] == arr[j]) {
					c++;
				}
			}

			if (n < 2*c-1) {
				isPossible = false;
				break;
			}
		}
	}

	if (isPossible) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}
