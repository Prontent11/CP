#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
       if(n==1)cout<<k<<endl;
       else if(n%k==0){
            cout<<1<<endl;
        }
        else if(n>k){
            cout<<2<<endl;
        }
        else if(k%n==0){
            cout<<k/n<<endl;
        }
        else if(k%n!=0){
            cout<<k/n+1<<endl;
        }
    }
    return 0;
}