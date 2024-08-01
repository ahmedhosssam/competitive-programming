#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
#include <bitset>
using namespace std;

#define int long long

int32_t main() {
    string s1; cin >> s1;
    string s2; cin >> s2;

    vector<int> arr1(3, 0);
    vector<int> arr2(3, 0);

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == '+') {
            arr1[0]++;
        } else if (s1[i] == '-') {
            arr1[1]--;
        } 
    }

    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] == '+') {
            arr2[0]++;
        } else if (s2[i] == '-') {
            arr2[1]--;
        } else if (s2[i] == '?') {
            arr2[2]++;
        }
    }

    int sum1 = arr1[0] + arr1[1];
    int sum2 = arr2[0] + arr2[1];

    if (arr2[2] == 0) {
        if (sum1 == sum2) {
            cout << "1.000000000000\n";
        } else {
            cout << "0.000000000000\n";
        }
    } else {
        bitset<10> b(0);
        int sum3 = sum2;
        int total = pow(2, arr2[2]);
        float prob = 0;
        for (int i = 0; i < pow(2, arr2[2]); i++) {
            b = i;
            for (int j = 0 ;j < arr2[2]; j++) {
                b[j] == 0 ? sum3++ : sum3--;
            }
            if (sum3 == sum1) {
                prob++;
            }
            //cout << sum3 << " --- " << sum1 << endl;
            sum3 = sum2;
        }
        printf("%.12f\n", prob/total);
    }

    return 0;
}
