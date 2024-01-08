#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int s1 = 0;
	int s2 = 0;
	cin >> n;

	string arr[n] = {};
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	string ss = arr[0];
	string sk;
	for (int i = 0; i < n; i++) {
		if (arr[i] == ss) {
			s1++;
		} else {
			s2++;
			sk = arr[i];
		}
	}

	if (s1 > s2) {
		cout << ss << endl;
	} else {
		cout << sk << endl;
	}
	return 0;
}
