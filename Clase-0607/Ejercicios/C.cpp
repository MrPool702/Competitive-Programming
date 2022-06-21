#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    ll cont = 0;
    int ones = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            cont = cont + ones + 1;
            ones++;
        }
    }
    cout << cont << "\n";
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
}