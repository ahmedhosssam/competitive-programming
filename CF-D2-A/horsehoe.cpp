#include <iostream>
using namespace std;

int main () {
	int arr[4] = {};
	int hoesneeded = 0;
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

	for (int i = 0; i < 3; i++) {
		for (int j = i+1; j < 4; j++) {
			if (arr[i] == arr[j]) {
				hoesneeded++;
				break;
			}
		}
	}
	cout << hoesneeded << endl;
}
