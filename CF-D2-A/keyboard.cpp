#include <iostream>
#include <string>
using namespace std;

char arr[30] = {'q','w','e','r','t','y','u','i','o','p',
   'a','s','d','f','g','h','j','k','l',';',
   'z','x','c','v','b','n','m',',','.','/'};

int getIndex(char ch) {
    for (int i = 0; i < 30; i++) {
        if (ch == arr[i]) {
            return i;
        }
    }
}


int main() {
    char shifting = 'L';
    cin >> shifting;

    string input;
    cin >> input;

    string output;

    if (shifting == 'L') {
        for (int i = 0; i < input.size(); i++) {
            output += arr[getIndex(input[i])+1];
        }
    } else {
        for (int i = 0; i < input.size(); i++) {
            output += arr[getIndex(input[i])-1];
        }
    }

    cout << output << endl;
}
