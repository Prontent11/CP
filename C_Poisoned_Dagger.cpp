#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
    ll n,h;
    cin>>n>>h;
    vector<ll>a(n);
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
ll s=1,e=h;
ll k=h;
while(s<=e){
    
    ll mid=(s+e)/2;
    ll damage=0;
    for(int i=0;i<n;i++){
            ll curr=mid;
        if(i<n-1){
            ll d =a[i+1]-a[i];
            if(d<mid)curr=d;
        }
        damage+=curr;
       
    }
     if(damage>=h){
            k=mid;
            e=mid-1;
        }
        else s=mid+1;

}
cout<<k<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
  while(tc--){
        // cout << "Case #" << t  << ": ";
        solve();
    }
}