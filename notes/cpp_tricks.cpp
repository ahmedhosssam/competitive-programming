#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    int n = 69;
    vector<int> a(n);
    sort(all(a));
    // to make the vector unique
    a.resize(unique(all(a)) - a.begin());  

    // to fill the vector with a specific number
    fill(all(vec), 1);
}
