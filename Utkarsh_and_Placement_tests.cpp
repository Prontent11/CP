#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int a,b,c;
        char s[5];
        char s1[5];
        for(int i=0;i<3;i++){
            cin>>s[i];
        }
        for(int i=0;i<2;i++){
            cin>>s1[i];
        }
        map<char,int>mp;
        for(int i=0;i<3;i++){
            mp[s[i]]=i;
        }
        if(mp[s1[1]]<mp[s1[0]]){
            cout<<s1[1]<<endl;
        }
        else cout<<s1[0]<<endl;
        
    }

    
    return 0;
}