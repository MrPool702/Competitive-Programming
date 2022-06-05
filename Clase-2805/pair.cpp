#include <bits/stdc++.h>
#define mk make_pair
using namespace std;

int main() {
    pair<int, int> p, z;
    p = {3, 5};
    z = {3, 10};
    cout << p.first << " , " << p.second << "\n";
    
    pair<int, int> A[5]; //arreglo de pairs
    A[0] = p;
    A[1] = z;
    A[2] = {1, 10};
    A[3] = make_pair(-1, 6);
    A[4] = mk(-2, -3);
    cout << A[0].second << "\n";

    pair<int, double> q;
    q = {5, 89.6};
    cout << p.first + q.first << "\n";

    //comparar pair
    if (z <= p) cout << "z <= p";
    else cout << "z > p";

    cout << "\n";
    //ordeno arreglo de pairs
    sort(A, A + 5);
    for (auto e : A) cout << " (" << e.first << "," << e.second << ") ";
}