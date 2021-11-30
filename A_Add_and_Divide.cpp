#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    int cnt=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b>=a)cout<<1<<"\n";
        else{
        while(a>1){
         cnt++;
         if(b%a==0)a=b/a;
         else if(b/a==0) break;
         else {
             b++;
         }
        }
        cout<<cnt<<"\n";
        }
    }
    return 0;
}