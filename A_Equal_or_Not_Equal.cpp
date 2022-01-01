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
    int cnt=0;
for (int i = 0; i < n; i++)
{
    if(s[i]=='N')cnt++;

}
if(cnt==1){
    cout<<"NO\n";
}
else cout<<"YES\n";

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