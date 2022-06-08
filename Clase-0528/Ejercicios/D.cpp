#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int h[n];
  for(int i=0;i<n;i++){
    cin>>h[i];
  }
  int c = 1;
  bool flag = false;
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
      if(h[i]>=h[j]){
        flag = true;
      }
      else{
        flag = false;
        break;
      }
    }
    if(flag){
      c+=1;
    }
  }
  cout<<c;
  return 0;
}
