#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    unordered_map<string,int>mp;
    string s;
    for(int i=0;i<t;i++){
        cin>>s;
        mp[s]++;
    }
    int mx=0;
    string ans;
    for(auto i:mp){
        if(mx<i.second){
            mx=i.second;
            ans=i.first;
        }        
    }

    cout<<ans;

    return 0;
}