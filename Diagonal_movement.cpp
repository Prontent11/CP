#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
       int x,y;
       cin>>x>>y;
       if(x<0) x=x*-1;
       if(y<0)y=y*-1;
       if(abs(x-y)%2==1){
           cout<<"NO\n";
       }
       else cout<<"YES\n";
    }
}