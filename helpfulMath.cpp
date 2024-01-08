#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "";
	string numstr = "";
	string finalstr = "";
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (isdigit(str[i])) {
			numstr += str[i];
		}
	}

	for (int i = 0; i < numstr.length()-1; i++) {
		for (int j = 0; j < numstr.length() - i - 1; j++) {
			if (numstr[j] > numstr[j+1]) {
				int swp = numstr[j];
				numstr[j] = numstr[j+1];
				numstr[j+1] = swp;
			}
		}
	}

	for (int i = 0; i < numstr.length(); i++) {
		finalstr += numstr[i];
		if (i != numstr.length()-1) {
			finalstr += '+';
		}
	}
	cout << finalstr << endl;
}
