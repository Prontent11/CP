#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
int n;cin>>n;
vector<ll>a(n);

for (int i = 0; i < n; i++)
{
    cin>>a[i];
    
    
}
ll gEven=0, gOdd=0;
for (int i = 0; i <n; i+=2)
{
    gEven=__gcd(gEven,a[i]);

}

for (int i = 1; i < n; i+=2)
{
   gOdd=__gcd(gOdd,a[i]);

}

for (int i = 1; i < n; i+=2)
{
    if(a[i]%gEven==0){
        gEven=0;
        break;
    }
}
for (int i = 0; i < n; i+=2)
{
    if(a[i]%gOdd==0){
        gOdd=0;
        break;
    }
}
if(gOdd>0){
cout<<gOdd<<endl;
return;
}
if(gEven>0){
cout<<gEven<<endl;
return;
}
cout<<0<<endl;


}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}