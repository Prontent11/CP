#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,x,t,tt;
    cin>>tt;
    while(tt--){
        cin>>n>>x>>t;
        ll z=t/x;
        if(z>n){
            cout<<(n*(n-1))/2<<"\n";

        }
        else{
        ll ans= z * n;
        ans-=(z*(z+1))/2;
        cout<<ans<<"\n";

        }
    }
    return 0;
}