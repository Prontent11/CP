#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
       int x,y;
       cin>>x>>y;
      if(x==y){
          for(int i=1;i<=x;i++){
              cout<<i<<" ";
          }
          cout<<endl;
      }
      else if(y==x-1) cout<<-1<<"\n";
      else {
          for(int i=1;i<=y;i++) cout<<i<<" ";
          for(int i=y+2;i<=x;i++) cout<<i<<" ";
          cout<<y+1;
          cout<<endl;
      }
    }
}