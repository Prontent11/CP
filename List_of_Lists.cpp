#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
       int n;cin>>n;
       vector<int>arr(n);
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
            map<int,int>mp;
          for(int i=0;i<n;i++){
              mp[arr[i]]++;
          }
          int mx=0;
          for(auto i:mp){
          if(i.second>mx){
              mx=i.second;
          }
          }
       if(arr.size()==1 or n==mx  )cout<<0<<endl;
       else if(arr.size()==2){
           if(arr[0]==arr[1])cout<<0<<endl;
           else cout<<-1<<endl;
       }
       else{
         
          
         
          if(mx>1){
              cout<<n-mx+1<<endl;
          }
          else cout<<-1<<endl;

        
       }        
    }

    
    return 0;
}