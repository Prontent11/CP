#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long cnt=1;
        long long x=0;
        if(a<=1 or b<=1 or c<=1)cout<<"NO\n";
      else{

       x=a-1;
        cnt+=x;
        x=b-1;
        cnt+=x;
        x=c-1;
        cnt+=x;
        if((cnt)%7==0){
            cout<<"YES\n";
        }    
        else cout<<"NO\n";
      } 
    }
    return 0;
}