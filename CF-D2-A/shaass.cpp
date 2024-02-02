#include <iostream>
using namespace std;

int main() {
	int nWires = 0;
	cin >> nWires;

	int wires[nWires] = {};

	for (int i = 0 ; i < nWires ; i++) {
		cin >> wires[i];
	}

	int m = 0;
	cin >> m;

	int shots[m][2] = {};

	for (int i = 0; i < m; i++) {
		for (int j = 0 ; j < 2 ; j++) {
			cin >> shots[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		int wireNum = shots[i][0] - 1;
		int birdNum = shots[i][1];

		wires[wireNum]--;
		wires[wireNum] -= (birdNum -1);
		if (wireNum != 0) {
			wires[wireNum-1] += (birdNum -1);
		}
		wires[wireNum+1] += wires[wireNum];
		wires[wireNum] = 0;
	}

	for (int i = 0 ; i < nWires ; i++) {
		cout << wires[i] << endl;
	}

	return 0;
}
