#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Bienvenid@ al GPC-UPC";
    s = s + " 2022-1"; //concatenacion
    s = s + '!';
    string nombre;
    cin >> nombre;
    s = s + " " + nombre; // también concatena
    cout << s.size() << "\n"; //tamaño del string
    cout << s <<"\n";
    //recorrer el string (for basado en rango)
    for (char e : s) cout << " " << e;
    cout << "\n";
    //recorrer el string (for tradicional)
    for (int i = 0; i < s.size(); i++) cout << " " << s[i];
    return 0;
}