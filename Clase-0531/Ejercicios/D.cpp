#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s, d;
    cin >> s >> d;
    if ( (s + d) % 2 == 0   && s - d >= 0  && (s - d) % 2 == 0) {
        int a = (s + d) / 2;
        int b = (s - d) / 2;
        cout << max(a, b) << " " << min(a, b);
    } else {
        cout << "inconsistente";  
    } 
    return 0;
}