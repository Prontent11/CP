#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;cin>>t;
  while (t--)
  {
      string s;
      cin>>s;
      int ans=0;
      int a;
      int ones(0),zeros(0);
      if(s[0]=='1')ones=-1;
      for(int i=0;i<s.length();){
          if(s[i]=='0'){
              zeros++;
             while(s[i]=='0'){

              i++;
             }
            //   cout<<s[i]<<"";
          }
          else if(s[i]=='1'){
              ones++;
              while(s[i]=='1'){
                  i++;
              }
            //   cout<<s[i]<<"";
          }
      }
      ans=ones+zeros;
      cout<<ans<<endl;
  }
  

}