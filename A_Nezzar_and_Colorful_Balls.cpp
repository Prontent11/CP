#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
       int n;cin>>n;
       int mx=0;
       int a;
       map<int,int>mp;
       for(int i=0;i<n;i++){
           cin>>a;
           mp[a]++;
           mx=max(mx,mp[a]);
       }
        
        cout<<mx<<"\n";        
    }

}