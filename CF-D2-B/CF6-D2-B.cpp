#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int32_t main() {
    //cout << 'G'-'A' << endl;
    int n; cin >> n;
    int m; cin >> m;
    char pr; cin >> pr;
    //char arr[500][500];
    vector<vector<char>> arr(500, vector<char>(500, '.'));
    int res = 0;

    vector<bool> alph(26, false);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (arr[i][j] == pr) {
                if (arr[i][j+1] != '.' && arr[i][j+1] != pr) {
                    if (!alph[arr[i][j+1]-'A']) {
                        res++;
                        alph[arr[i][j+1]-'A'] = true;
                    }
                }

                if (arr[i][j-1] != '.' && arr[i][j-1] != pr) {
                    if (!alph[arr[i][j-1]-'A']) {
                        res++;
                        alph[arr[i][j-1]-'A'] = true;
                    }
                }

                if (arr[i+1][j] != '.' && arr[i+1][j] != pr) {
                    if (!alph[arr[i+1][j]-'A']) {
                        res++;
                        alph[arr[i+1][j]-'A'] = true;
                    }
                }


                if (arr[i-1][j] != '.' && arr[i-1][j] != pr) {
                    if (!alph[arr[i-1][j]-'A']) {
                        res++;
                        alph[arr[i-1][j]-'A'] = true;
                    }
                }


                /*
                int k1 = j;
                int k2 = j;
                while (k1-- && arr[i][k1] != '.' && arr[i][k1] != pr) {
                    //cout << arr[i][k1] << endl;
                    if (alph[arr[i][k1]-'A']) { continue; }
                    alph[arr[i][k1]-'A'] = true;
                    res++;
                    break;
                }
                while (k2++ < m && arr[i][k2] != '.' && arr[i][k2] != pr) {
                    //cout << arr[i][k2] << endl;
                    if (alph[arr[i][k2]-'A']) { continue; }
                    alph[arr[i][k2]-'A'] = true;
                    res++;
                    break;
                }

                int h1 = i-1;
                int h2 = i+1;
                while (h1>=0 && arr[h1][j] != '.' && arr[h1][j] != pr) {
                    //cout << arr[h1][j] << endl;
                    if (alph[arr[h1][j]-'A']) { h1--; continue; }
                    alph[arr[h1][j]-'A'] = true;
                    res++;
                    h1--;
                    break;
                }
                while (h2 < n && arr[h2][j] != '.' && arr[h2][j] != pr) {
                    //cout << arr[h2][j] << endl;
                    if (alph[arr[h2][j]-'A']) { h2++; continue; }
                    alph[arr[h2][j]-'A'] = true;
                    res++;
                    h2++;
                    break;
                }
                */
            }
        }
    }
    cout << res << endl;
    return 0;
}
