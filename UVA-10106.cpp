#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long
// stoi()

string compute_products(string a, string b) {
    string mx = (a.length() > b.length()) ? a : b;
    string mn = (a.length() < b.length()) ? a : b;

    if (a.length() == b.length()) {
        mx = a;
        mn = b;
    }

    int sb = mx.length() - mn.length();

    bool carry = false;
    for (int i = mn.length()-1; i >=0 ; i--) {
        int xd = (mx[i+sb]-48) + (mn[i]-48);
        string st = to_string(xd);
        if (carry) {
            xd++;
            carry = false;
            st = to_string(xd);
        }
        if (xd <= 9) {
            mx[i+sb] = st[0];
        } else {
            carry = true;
            mx[i+sb] = st[1];
        }
    }
    if (carry) {
        sb--;
        while (sb >= 0) {
            int xd = (mx[sb]-48); xd++;
            string st = to_string(xd);
            if (xd <= 9) {
                mx[sb] = st[0];
                carry = false;
                break;
            } else {
                mx[sb] = st[1];
                sb--;
            }
        }
        if (carry) {
            string tmp = mx;
            mx = "1";
            mx += tmp;
        }
    }
    return mx;
}

int32_t main() {
    string n1;
    string n2;

    while (cin >> n1 >> n2) {
        vector<string> products;
        for (int i =n1.length()-1; i >= 0; i--) {
            for (int j =n2.length()-1; j >= 0; j--) {
                string str = "";
                int x = (n1[i]-48) * (n2[j]-48);
                str += to_string(x);

                for (int k =j+1; k < n2.length(); k++) {
                    str += '0';
                }

                for (int p =i+1; p < n1.length(); p++) {
                    str += '0';
                }

                products.push_back(str);
            }
        }

        while (products.size() > 1) {
            products[0] = compute_products(products[0], products[1]);
            products.erase(products.begin()+1);
        }
        cout << products[0] << endl;
    }


    return 0;
}
