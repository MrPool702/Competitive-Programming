#include<bits/stdc++.h>
using namespace std;
int main(){
  int a;
  while (cin >> a){
    int x;
    int c = 0;
    for (int i = 0; i < 5; i++){
      cin >> x;
      if (x == a){
        c++;
      }
    }
    cout<<c<<"\n";
  }
  
  return 0;
}