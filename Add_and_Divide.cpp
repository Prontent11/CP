#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;cin>>t;
  while (t--)
  {
    //  int x=0;
     int a,b;
     cin>>a>>b;
     int set=0;
    int x=0,y=1;
    while(true){
        int mid=x+y/2;
        if(mid<b/a){
            x=mid+1;
        }
        else if(mid>/a){
            y=mid-1;
        }
        else if(mid==b/a){
          set=1;
          break;
        }
        

    }

if(set)cout<<"YES\n";else cout<<"NO\n";
  }
  

}