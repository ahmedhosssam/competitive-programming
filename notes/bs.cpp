#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define int long long
int midpoint(int x, int y) {
    return x + (y-x)/2;
}

int binary_search(int A[], int key, int imin, int imax) {
    while (imax >= imin) {
        int imid = midpoint(imin, imax);
        if (key < A[imid]) {
            imax = imid-1;
        } else if (key > A[imid]) {
            imin = imid+1;
        } else {
            return imid-1;
        }
    }
    return -1;  // couldn't find key
}

int32_t main() {
    int arr[15] = {0, 1, 2, 2, 3, 5, 5,9, 9, 9, 9, 9, 9, 10, 11};
    cout << binary_search(arr, 9, 0, 15) << endl;
    return 0;
}
