#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> M; //guarda id en orden asc, omite repetidos de id 
    M.insert({24, "Jose"}); // inserta elemento en O(log n)
    M.insert({23, "Pablo"});
    M.insert({25, "Pedro"});
    M.insert({24, "Luis"});
    for (pair<int, string> e : M) {
        cout << e.first << " " << e.second << "\n";
    }
    cout << "\n";
    M.erase(24); // borra elemento en O(log n)
    for (auto it = M.begin(); it != M.end(); it++) {
        cout << (*it).first << " " << (*it).second << "\n";
    }
    cout << M[23] << "\n"; // acceso al valor en O(log n)
    M[23] = "Ricardo"; //modifico valor en O(log n), pero si no existe id lo inserta
    M[26] = "Juan"; // como no existe id , lo inserta
    for (auto e : M) cout << e.first << " " << e.second << "\n";
    return 0;
}