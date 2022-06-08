  #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int p[n];
    for(int j=0 ; j<n; j++){
      cin>>p[j];
    }
    int c = 0;
    for(int i=1;i<n-1;i++){
      if((p[i]>=p[i-1] && p[i+1]>=p[i])||(p[i]<=p[i-1] && p[i+1]<=p[i])){
        c+=1;
      }
      else{
      }
    }
    cout<<c;
    return 0;
  }