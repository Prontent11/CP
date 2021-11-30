#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
       string s,t;
       cin>>s;
       cin>>t;
       int lens=s.length();
       int lent=t.length();
       int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s.find(s[i],i+1))cnt++;
            
        }

       if(s.length()>t.length())cout<<"YES\n";
       else if(cnt)cout<<"YES\n";
       
       else if(s==t)cout<<"YES\n";
       else if(s.length()==2 and s!=t)cout<<"NO\n";
        else if(s[0]==t[lent-1] or t[0] ==s[lens-1]){
           cout<<"NO\n";
       }
       else {
           cout<<"YES\n";
       }
        
      
    }
    return 0;

}