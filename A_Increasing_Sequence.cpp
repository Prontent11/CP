#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
int n,d;cin>>n>>d;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int cnt(0);
for(int i=0;i<n-1;i++){
 if(arr[i]>=arr[i+1]){
    cnt+=((arr[i]-arr[i+1])+1/d);
    arr[i+1]+=((arr[i]-arr[i+1])+1)*d;
 }
}
cout<<cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}