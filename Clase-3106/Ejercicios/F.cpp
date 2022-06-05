#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

char M[8][8];

int main() {
    int n, cont = 0;
    pair<int, int> p, q;
    char c;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> c;
            M[i][j] = c;
            if (c == 'R') {
                if (cont == 0) {
                    p = {i, j};
                    cont++;
                } else {
                    q = {i, j};
                }
            }
        }
    }
    if (p.fi == q.fi) cout << "ataque en fila";
    else if (p.se == q.se) cout << "ataque en columna";
    else if (abs(p.fi - q.fi) == abs(p.se - q.se)) cout << "ataque en diagonal";
    else cout << "no hay ataque";
    return 0;
}