#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n+1);
        vector<int>b(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        
        int l,r;
        bool check=false;
        vector<int>pos;
        vector<int>neg;
        for(int i=1;i<=n;i++){
           
          
           if(a[i]<b[i]){
               int s=b[i]-a[i];
            //    a[i]+=s;
               while (s--)
               {
                   pos.push_back(i);
               }
               
           }
           else if(a[i]>b[i]){
               int s=abs(b[i]-a[i]);
               
               while (s--)
               {
                   neg.push_back(i);
               }
               
           }
        }
        

        if(pos.size()!=neg.size()) cout<<-1<<"\n";
        else {cout<<pos.size()<<"\n";
        for(int i=0;i<pos.size();i++){
            cout<<neg[i]<<" "<<pos[i]<<"\n";
        }
        }
        

    }
    
    return 0;
}