#include<bits/stdc++.h>
using namespace std;

int main(){
    short x;
    cin >> x;
    if(x % 2 == 0 && x > 3){
        cout << "YES";
    }
    else if((x/2)-1 % 2 == 0 && (x/2) % 2 == 0){
        cout <<int(x/2) << endl ;
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
    