#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
        long long a,b;cin>>a>>b;

if(a==b)cout<<0<<" "<<0<<"\n";
else if(a==1 or b==1) cout<<1<<" "<<0<<"\n";
else if(a==0) cout<<b<<" "<<0<<"\n";
else if(b==0) cout<<a<<" "<<0<<"\n";
else{


        long long gc=abs(a-b);
        long long mx=min(a,b);
        long long ans=mx/gc;
        long long ans1=ans;
        ans++;
        
        ans1=ans1*gc;
        ans1=abs(mx-ans1);
        ans=ans*gc;
        ans=abs(mx-ans);
        long long fa=min(ans1,ans);
        cout<<gc<<" "<<fa<<endl;
}
    }
    return 0;
}