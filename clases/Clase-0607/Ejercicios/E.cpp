#include <bits/stdc++.h>
#define MAXN 100000
using namespace std;

int A[MAXN], B[MAXN];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> A[i];
    for (int i = 0; i < n; ++i) cin >> B[i];
    int pd = -1, ud = -1; //primer y último distinto
    for (int i = 0; i < n; ++i) {
        if (A[i] != B[i]) {
            pd = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (A[i] != B[i]) {
            ud = i;
            break;
        }
    }
    // solo podría hacer push en el rango [pd, ud]
    if (pd == -1 && ud == -1) { // no hay distintos, entonces A = B
        cout << "YES\n";
    } else { // valido si existe k para el push
        int k = B[pd] - A[pd];
        bool can = true;
        for (int i = pd; i <= ud; ++i) {
            if (B[i] - A[i] != k) can = false;
        }
        if (can == true && k > 0) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
}