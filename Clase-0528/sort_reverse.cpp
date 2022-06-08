#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end()); //ordena los caracteres del string
    cout << s << "\n";
    reverse(s.begin(),s.end()); //invierte los elementos
    cout << s;
}