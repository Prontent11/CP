#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;cin>>t;
  while(t--){
  int n,p,x,y;
  cin>>n>>p>>x>>y;
  vector<int>a(n);
  for (int i = 0; i < n; i++)
  {
      cin>>a[i];
  }
  int ans=0;
  for(int i=0;i<p;i++){
      if(a[i]==0){
          ans+=x;
      }
      else ans+=y;
  }
  cout<<ans<<endl;
    }
}