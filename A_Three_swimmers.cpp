#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;cin>>t;
  while(t--){

    long long int p,a,b,c;
    cin>>p>>a>>b>>c;
    long long int A=a-p%a;
    if(A==a)A=0;
    long long int B=b-p%b;
    if(B==b)B=0;
    long long int C=c-p%c;
    if(C==c)C=0;

    long long int ans=min(A,min(B,C));
    cout<<ans<<"\n";
  }
    
    return 0;
}