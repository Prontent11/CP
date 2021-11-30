#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        int mx=0,mi=101;
        int locm,loci;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(mx<a[i])
            {
            mx=a[i];
            locm=i+1;
            } 
            if(mi>a[i])
            {
            mi=a[i];
            loci=i+1;
            } 
            
        }
        int rcont(0),lcont(0);
        lcont=max(locm,loci);
            int j=1;
        for(int i=n-1;i>=0;i--){
            if(mx<a[i])
            {
            mx=a[i];
            locm=n-i-1;
            } 
            if(mi>a[i])
            {
            mi=a[i];
            loci=n-i-1;
            } 
            j++;
            
        }
        rcont=max(locm,loci);
    int ans= min(rcont,lcont);
    cout<<ans<<"\n";
    }
}