#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	
	int p0 = 0;
	cin >> p0;

	int arr1[p0] = {};

	for (int i = 0; i < p0; i++) {
		cin >> arr1[i];
	}

	int p1 = 0;
	cin >> p1;

	int arr2[p1] = {};

	for (int i = 0; i < p1; i++) {
		cin >> arr2[i];
	}

	bool yeah = false;
	vector<int> passed = {};

	for (int i = 0; i < p0; i++) {
		if (count(passed.begin(), passed.end(), arr1[i]) == 0) {
			passed.push_back(arr1[i]);
		}
	}
	
	for (int i = 0; i < p1; i++) {
		if (count(passed.begin(), passed.end(), arr2[i]) == 0) {
			passed.push_back(arr2[i]);
		}
	}

	if (passed.size() == n) {
		cout << "I become the guy.\n";
	} else {
		cout << "Oh, my keyboard!\n";
	}

	//yeah ? cout << "I become the guy.\n" : cout << "Oh, my keyboard!\n";
	
	return 0;
}
