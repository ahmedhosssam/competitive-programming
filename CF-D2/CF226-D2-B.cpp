#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cstdint>
#include <cmath>
using namespace std;

#define int long long

string samp = "bear";
string s;

bool check(int i ){
	int sz  = s.size();
	bool ok = false;
	return ok;
}

int32_t main() {
    string s; cin >> s;
    int n = s.length();
    string samp = "bear";
    int res = 0;
    int l = 0;
    for (int i = 0; i < n-3; i++) {
        /*
        bool ok = false;
        for(int k = 0 ;k < 4 && k+i < n ; k++){
            if(samp[k] != s[i+k])
                break;
            if(k == 3)
                ok = true;
        }
        if (ok) {
        }
        */

        if (s[i]=='b' && s[i+1]=='e' && s[i+2]=='a' && s[i+3]=='r') {
            int x = i +1- l;
            int y = n - (i + 3);
            res += x*y;
            l = i+1;
        }
    }
    cout << res << endl;
    return 0;
}
