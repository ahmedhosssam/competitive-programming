#include <iostream>
#include <string>
using namespace std;

bool isEq(string s1, string s2) {
	if (s1.length() == s2.length()) {
		return true;
	}
	return false;
}

int main() {
	string str = "";
	string str1 = "";
	string str2 = "";
	string ch = "";
	bool isPos = false;

	cin >> str;
	cin >> ch;
	int whereis = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '|') {
			whereis = i;
		}
	}

	for (int i = 0; i < whereis; i++) {
		str1 += str[i];
	}

	for (int i = whereis+1; i < str.length(); i++) {
		str2 += str[i];
	}

	string finalstr1 = "";
	string finalstr2 = "";

	for (int i = 1; i < ch.length()+1; i++) {
		string st = str1 + ch.substr(0, i);
		string st2 = str2 + ch.substr(i, ch.length()-1);

		if (isEq(st, st2)) {
			isPos = true;
			finalstr1 = st;
			finalstr2 = st2;
		}
	}

	if (!isPos) {
		for (int i = 1; i < ch.length()+1; i++) {
			string st = str1 + ch.substr(i, ch.length()-1);
			string st2 = str2 + ch.substr(0, i);

			if (isEq(st, st2)) {
				isPos = true;
				finalstr1 = st;
				finalstr2 = st2;
			}
		}
	}

	if (isPos) {
		cout << finalstr1 << '|' << finalstr2 << endl;
	} else {
		cout << "Impossible\n";
	}
	

	return 0;
}
