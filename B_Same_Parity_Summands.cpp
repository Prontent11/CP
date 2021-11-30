#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a,b;
        a=(2*(k-1));
        b=(1*(k-1));
        int ans1=n-(2*(k-1));
        int ans2=n-(1*(k-1));
        if(a<n and ans1%2==0){
            cout<<"YES\n";
            cout<<ans1<<" ";
            for(int i=0;i<k-1;i++){
                cout<<2<<" ";
            }
            cout<<"\n";
        }
        else if( b<n and ans2%2!=0){
            cout<<"YES\n";
            cout<<ans2<<" ";
            for(int i=0;i<k-1;i++){
                cout<<1<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}