#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;cin>>t;
    unordered_map<string,int>mp;
        string s;
    while(t--){
        cin>>s;
        mp[s]++; 
        if(mp[s]>1){
            
            cout<<s<<1<<"\n";
            
        }
        else{
            cout<<"OK\n";
        
            
        } 

        
    }
   
    return 0;
}