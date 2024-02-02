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
