#include <iostream>
#include <string>
using namespace std;

char arr[4][4] = {};

bool test(int i, int j) {
	if (i+1 == 4 || j+1 == 4) {
		return false;
	}

	return arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+1][j+1];
}

bool test() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (test(i, j)) {
				return true;
			}
		}
	}
	return false;
}

int main() {

	bool isPossible = false;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}

	isPossible = test();

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			char original = arr[i][j];

			// do flip
			if (arr[i][j] == '.') {
				arr[i][j] == '#';
			} else {
				arr[i][j] == '.';
			}

			if (test()) {
				isPossible = true;
				break;
			}

			arr[i][j] = original;
		}
	}

	if (isPossible) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}
