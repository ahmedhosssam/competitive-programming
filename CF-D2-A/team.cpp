#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int res = 0;

	cin >> n;
	int arr[n][3] = {};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		int x = 0;
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == 1) x++;
		}
		if (x > 1) res++;
	}
	cout << res << endl;
}
