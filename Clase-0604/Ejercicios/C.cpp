#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    bool open = true; //apertura
    while(getline(cin , s)) {
        string aux = "";
        for (char c : s) {
            if (c == '"') {
                if (open) {
                    aux += "``"; 
                    open = false; //cierre
                } else {
                    aux += "''";
                    open = true;
                } 
            } else {
                aux += c;
            }
        }
        cout << aux << "\n";
    }
    return 0;
}