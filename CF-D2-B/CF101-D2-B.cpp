#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long

int32_t main() {
    int	a, x, y; cin >> a >> x >> y;
	a *= 2;
	x *= 2;
	y *= 2;

	if (y>0&&y<a) {
		if (x>-a/2&&x<a/2) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
        return 0;
	}

	y -= a;
	int	t=y/(a*2);
	y%=(a*2);

	if (y>0&&y<a) {
		if (x>-a/2&&x<a/2) {
            cout << t*3+2 << endl;
        } else {
            cout << -1 << endl;
        }
        return 0;
	} else {
        if (y>a&&y<a*2) {
            if (x>-a&&x<0) {
                cout << t * 3 + 3 << endl;
            } else {
                if (x > 0 && x < a)	{
                    cout << t * 3 + 4 << endl;
                } else {
                    cout << -1 << endl;
                }
            }
        } else {
	        cout << -1 << endl;
        }
    }

    return 0;
}
