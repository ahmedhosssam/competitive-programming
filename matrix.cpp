#include <iostream>
using namespace std;

int main() {
	int arr[5][5] = {};
	int ii = 0;
	int jj = 0;
	int n = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) { 
				ii = i;
				jj = j;
			}
		}
	}


	for (int i = 0; i < 50; i++) {
		if (ii == 2 && jj == 2) break;
		if (ii > 2) {
			ii--;
			n++;
		} else if (ii < 2) {
			ii++;
			n++;
		} else if (jj > 2) {
			jj--;
			n++;
		} else if (jj < 2) {
			jj++;
			n++;
		}
	}

	cout << n << endl;

	return 0;
}
