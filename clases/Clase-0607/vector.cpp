#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(5); //inserta elemento al final en O(1)
    v.push_back(3);
    v.push_back(-1);
    //v.insert() y v.erase(), pero son lineales
    cout << v.size() << "\n"; // tamaño del vector
    for (int e : v) cout << " " << e;
    cout << "\n";
    v.pop_back(); // borra último elemento en O(1)
    for (int i = 0; i < v.size(); ++i) cout << " " << v[i];
    cout << "\n";
    // iteradores
    auto it = v.begin(); //iterador apunta a primer elemento
    for (; it != v.end(); it++) {
        cout << " " << *it;  //obtengo el valor al que apunta
    }
}
