#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); //leer una cadena
    cout << s << "\n";
    // leer lineas hasta fin de archivo
    while (getline(cin, s)) {
        cout << s << "\n";
    }
    return 0;
}