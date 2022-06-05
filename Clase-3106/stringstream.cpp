#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "gpc upc 2022";
    istringstream in (s);
    string cad, cad1, cad2;
    int x;
    in >> cad;
    in >> cad1;
    in >> x;
    in >> cad2;
    cout << x * 2 << "\n";
    cout << cad2;
    string texto = "bienvenido al gpc upc 2022 !";
    istringstream ciin (texto);
    while (ciin >> cad) {
        cout << cad << "\n";
    }
}
