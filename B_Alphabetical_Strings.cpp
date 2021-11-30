#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
 string s;cin>>s;
 int n=s.length();
 int i=0,j=n-1;
 char ch=(char)('a'+n-1);
 while(i<=j){
     if(ch==s[i]){
         i++;
         ch--;
     }
     else if(ch==s[j]){
         ch--;
         j--;
     }
     else {
         cout<<"NO\n";
         return;
     }
 }

 cout<<"YES\n";
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