#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	string str;
	cin >> str;

	int s;
	int t;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'R') {
			s = i;
			for (int j = i+1; j < str.length(); j++) {
				if (str[j] == 'R') {
					t = j;
				} else {
					break;
				}
			}
			break;
		}
	}

	cout << s+1 << " " << t+1 << endl;
}
