#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
 int xa,ya;cin>>xa>>ya;
        int xb,yb;cin>>xb>>yb;
        int xf,yf;cin>>xf>>yf;

        int ans=abs(xa-xb)+abs(yb-ya);
        if(xa==xb and yb==ya){
            cout<<ans<<"\n";
            return ;
            
        }
        else if(xa==xb){
            if(xa==xf and yf>=min(ya,yb) and yf<=max(yb,ya)){
                ans+=2;
            }
            
        }
        else if(ya==yb){
            if(ya==yf and xf>=min(xa,xb) and xf<=max(xb,xa)){
                ans+=2;

            }
        }
        cout<<ans<<"\n";
     
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