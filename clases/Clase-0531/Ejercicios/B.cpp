#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cont = 0;
    for (auto c : s) {
        if (c >= '0' && c <= '9') cont++;
    }
    cout << cont;
    return 0;
}