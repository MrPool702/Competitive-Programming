#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t; //no lee espacios ni saltos de linea
    cin.ignore(1); //ignora 1 caracter en la lectura
    for (int i = 0; i < t; i++) {
        getline(cin, s);
        //elimino las letras 'a'
        string aux = "";
        for (auto e : s) {
            if (e != 'a') aux = aux + e;
        }
        cout << aux << "\n";
    }
    return 0;
}