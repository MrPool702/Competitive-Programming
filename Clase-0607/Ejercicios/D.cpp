#include <bits/stdc++.h>
#define c 1000000007
using namespace std;

void solve() {
    long long n;
    cin >> n;
    cout << ((n % c) * (n % c)) % c << "\n";
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
}