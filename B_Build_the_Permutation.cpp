#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
 
ll power(ll a, ll b){ // a raised to power b
  ll res=1;
  while(b){
    if(b&1) res=(res*a)%mod;
    b>>=1;
    a=(a*a)%mod;
  }
  return res;
}
 
bool isprime(ll n){
  for(ll i=2;i*i<=n;i++){
   if(n%i==0) return 0;
  }
  return 1;
}
 
void solve()
{
//TC O(n)
//SC O(n)
  ll n,a,b;
  cin>>n>>a>>b;
  ll possible=(n-2);
  if(a+b>possible){
      cout<<-1<<endl;return;
  }
  if(abs(a-b)>1){
      cout<<-1<<endl;return;
  }
  vector<ll> ans(n);
  if (a > b)
    {
        ll curr = n;
        for (int i = 1, cnt = 0; cnt < a; i += 2, cnt++)
        {
            ans[i] = curr; curr--;
        }
        ll right=curr;
        curr = 1;
        for (int i = 2, cnt = 0; cnt < b; i += 2, cnt++)
        {
            ans[i] = curr;curr++;
        }
        ans[0]=right--;
        for(int i=a+b+1;i<n;i++) ans[i]=right--;
    } 
    else if (a < b) {
        ll curr=1;
        for (int i = 1, cnt = 0; cnt < b; i += 2, cnt++)
        {
            ans[i] = curr;curr++;
        }
        ll left=curr;
        curr = n;
        for (int i = 2, cnt = 0; cnt < a; i += 2, cnt++)
        {
            ans[i] = curr;curr--;
        }
        ans[0]=left++;
        for(int i=a+b+1;i<n;i++) ans[i]=left++;
    } 
    else{
        ll curr = n;
        for (int i = 1, cnt = 0; cnt < a; i += 2, cnt++)
        {
            ans[i] = curr; curr--;
        }
        curr = 1;
        for (int i = 2, cnt = 0; cnt < b; i += 2, cnt++)
        {
            ans[i] = curr;curr++;
        }
        ll left=curr;
        ans[0]=left++;
        for(int i=a+b+1;i<n;i++) ans[i]=left++;
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl; 
    
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t=1;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}