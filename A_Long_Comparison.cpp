#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve()
{
   ll x1,p1;cin>>x1>>p1;
   ll x2,p2;cin>>x2>>p2;
   string s1=to_string(x1),s2=to_string(x2);
   ll n=s1.size(),m=s2.size();
   ll cnt1=n+p1,cnt2=m+p2;
   if(cnt1>cnt2){
       cout<<">"<<endl;
   }
   else if(cnt1<cnt2){
       cout<<"<"<<endl;
   }
   else{
    ll i=0;
       for(i=0;i<min(n,m);i++){
           if(s1[i]>s2[i]){
               cout<<">"<<endl;return;
           }
           else if(s1[i]<s2[i]){
               cout<<"<"<<endl;return;
           }
       }
       if(n>m){
               while(i<n){
                   ll d=s1[i++]-'0';
                   if(d>0){
                        cout<<">"<<endl;return;
                   }
               }
               cout<<"="<<endl;
           }
           else{
               while(i<m){
                   ll d=s2[i++]-'0';
                   if(d>0){
                        cout<<"<"<<endl;return;
                   }
               }
               cout<<"="<<endl;
           }
   }
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t=1;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}