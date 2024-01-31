#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long
using namespace std;

int32_t main() {
    int step=0 , mod=0,c=1,num=0;
    while(cin>>step>>mod){
        c=1;
        while(1){
            num=(num+step)%mod;
            c++;
            if(num==0) {
             c--;   break;
            }
        }
        if (c==mod) {
           cout << setw(10) << step << setw(10) << mod << "     "<<"Good Choice"<<endl;
        } else {
            cout << setw(10) << step << setw(10) << mod << "     "<<"Bad Choice"<<endl;
        }
    }
    return 0;
}

/*
int32_t main() {
    
    int step;
    int mod;

    vector<int> v;
    while (cin >> step) {
        cin >> mod;
        v.push_back(0);

        int x = step;
        while (true) {
            if (x < mod) {
                v.push_back(x);
                x = (x+step)%mod;
                if (x == 0) {
                    break;
                }
            } else {
                x = x%mod;
                if (x == 0) {
                    break;
                }
                x += step;
            }
        }

        sort(v.begin(), v.end());
        bool is = true;
        for (int i =0; i< v.size()-2; i++) {
            if (v[i] != v[i+1]-1) {
                is = false;
                break;
            }
        }
        //cout << (is ? "Good Choice\n" : "Bad Choice\n");
        if (is) {
            cout << setw(10) << step << setw(10) << mod << "     " << "Good Choice\n";
        } else {
            cout << setw(10) << step << setw(10) << mod << "     " << "Bad Choice\n";
        }

        cout << endl;
        v.clear();
    }
    return 0;
}
*/
