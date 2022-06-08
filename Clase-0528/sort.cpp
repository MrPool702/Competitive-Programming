#include <bits/stdc++.h>
using namespace std;

int main() {
    int A[] = {4, 6 , 2, 10};
    int n = 4;
    sort(A, A + n); //ordena el arreglo asc
    for (int i = 0; i < n; ++i) cout << " " << A[i];
    cout << "\n";
    for (int elem : A) cout << " " << elem; //for basado en rango
}