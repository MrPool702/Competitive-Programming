#include<bits/stdc++.h>
using namespace std;
int main(){
  int x[6];
    for (int i = 0; i < 6; i++){
        cin >> x[i];
    }
    if(x[4]- x[0] <= x[5]){
        cout << "Yay!";
    }
    else{
        cout << ":(";
    }
  return 0;
}