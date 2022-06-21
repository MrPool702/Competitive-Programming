#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s; //guarda id en orden asc, omite repetidos 
    s.insert(6); //inserta elemento en O(log n)
    s.insert(7);
    s.insert(3);
    s.insert(6);
    cout << s.size() << "\n";
    for (int e : s) cout << " " << e;
    cout << "\n";
    s.erase(6); //borra elemento en O(log n)
    for (auto it = s.begin(); it != s.end(); it++) cout << " " << *it;
    cout << "\n";
    if (s.count(7) == 1) { //cuanta apariciones en O(log n)
        cout << "existe el elemento";
    } 
}