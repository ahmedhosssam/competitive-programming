#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int d = 0;
	for (int i = 0; i < str.size(); i++) {
		int m = 1;
		for (int j = i+1; j < str.size(); j++) {
			if (str[i] == str[j]) m++;
		}
		if (m == 1) d++;
	}

	if (d % 2 == 1) {
		cout << "IGNORE HIM!\n";
	} else {
		cout << "CHAT WITH HER!\n";
	}
	return 0;
}
