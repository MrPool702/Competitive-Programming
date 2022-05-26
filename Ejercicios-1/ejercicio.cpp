#include<bits/stdc++.h>
using namespace std;
int main(){
  int in[2];
  int res;
  for(int i=0;i<2;i++){
    cin>>in[i];
  }
  if(in[0] == in[1]+1 || in[0]== in[1]-1 || in[0]== in[1]){
    res = in[0] + in[1];
    cout<< res;
  }
  else if(in[0] > in[1]+1){
    res = (in[0]*2) -1;
    cout<< res;
  }
  else{
    res = (in[1]*2) -1;
    cout<< res;
  }
  return 0;
}
