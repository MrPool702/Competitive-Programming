#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    bool existe[n + 1];
    for (int i = 0; i <= n; ++i) existe[i] = false;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x >= 1 && x <= n) existe[x] = true;
    }
    int cont = 0;
    for (int i = 1; i <= n; ++i) {
        if (!existe[i]) cont++;
    }
    cout << cont;
    return 0;
}