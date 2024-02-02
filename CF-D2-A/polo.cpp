#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0;
	int k = 0;
	int sum = 0;
	int moves = 0;
	cin >> n >> k;

	int arr[n][2];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = arr[i][0]; j < arr[i][1]+1; j++) {
			sum++;
		}
	}

	while (true) {
		if (sum % k != 0) {
			sum++;
			moves++;
		} else {
			break;
		}
	}
	cout << moves << endl;
	return 0;
}
