#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
	char vowels[12] = {'a', 'A', 'o', 'O', 'y', 'Y', 'e', 'E', 'u', 'U', 'i', 'I'};
	for (int i=0;i<12;i++) {
		if (ch == vowels[i]) {
			return true;
		}
	}
	return false;
}

int main() {
	string str = "";
	string out = "";
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (isVowel(str[i])) {
			continue;
		} else {
			out += '.';
			if (static_cast<int>(str[i]) <= 90) {
				char ch = static_cast<char>(str[i]+32);
				out += ch;
			} else {
				out += str[i];
			}
		}
	}

	cout << out << endl;
	return 0;
}
