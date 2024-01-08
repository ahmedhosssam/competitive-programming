#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "";
	string t = "";
	size_t n = 1;
	cin >> s;
	cin >> t;

	for (size_t i = 0; i < t.length(); i++) {
		if (t[i] == s[n-1]) {
			n++;
		}
	}

	cout << n << endl;

	return 0;
}
