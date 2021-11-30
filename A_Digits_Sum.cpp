#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a,b;

        if(n<9)cout<<0<<"\n";
        else if(n==9)cout<<1<<"\n";
        else if(n%10==9)cout<<n/10+1<<"\n";
        else {
            a=n/10;
        cout<<a<<"\n";
        }
        
      
    }
    return 0;

}