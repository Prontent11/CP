#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;cin>>n;
   vector<int>a;
   vector<int>b;
   vector<int>c;
   int x;
   for(int i=1;i<=n;i++){
       cin>>x;
       if(x==1) a.push_back(i);
       else if(x==2) b.push_back(i);
       else if(x==3) c.push_back(i);
   }
        int mn=min(min(a.size(),b.size()),c.size());
        cout<<mn<<"\n";
        for(int i=0;i<mn;i++){
            cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<"\n";
        }
   
    return 0;
}