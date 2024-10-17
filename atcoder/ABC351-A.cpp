#include <bits/stdc++.h>
using namespace std;

#define int long long

int main() {
    int takahashi[9], aoki[8];
    int takahashiTotal = 0, aokiTotal = 0;
    
    for (int i = 0; i < 9; i++) {
        cin >> takahashi[i];
    }
    for (int i = 0; i < 8; i++) {
        cin >> aoki[i];
    }
    
    
    for (int i = 0; i < 9; i++) {
        takahashiTotal += takahashi[i];
        if (i < 8) {
            aokiTotal += aoki[i];
        }
    }
    
    int difference = takahashiTotal - aokiTotal;
    
    int minRunsToWin = 0;
    while (difference >= 0) {
        difference -= aoki[minRunsToWin];
        minRunsToWin++;
    }
    
    cout << minRunsToWin << endl;
    
    return 0;
}

