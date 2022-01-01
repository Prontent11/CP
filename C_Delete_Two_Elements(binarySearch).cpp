#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
int n;cin>>n;
vector<int>a(n);
map<int,int>mp;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    mp[a[i]]++;
}
int sum=accumulate(a.begin(),a.end(),0);
int k=sum/n;
sort(a.begin(),a.end());
int sremove=2*(sum/n);
int l=0,h=0;
int cnt=0;
for(int i=0;i<n;i++){
    
    int l=i+1,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        int target=sremove-a[i];
        if(target==a[mid]){
            cnt++;
          
            
        } 
        else if(a[mid]>target){
                h=mid-1;
        }   
        else if(a[mid]<target){
            l=mid+1;
        }
        else break;
    }



}
cout<<cnt<<endl;
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