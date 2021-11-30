#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;cin>>t;
  while(t--){
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    int mx=max(a,b);
    mx=max(mx,c);
    c--;
    if(c>=m and a!=0 and b!=0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    }
}