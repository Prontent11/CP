#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(mp[i]>mx){
                mx=mp[i];

            }
        }
    }
    return 0;
}