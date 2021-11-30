#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt(0),mx(0);
    for(int i=0;i<n-1;i+=2){
        cnt=arr[i+1]-arr[i];
        mx=max(cnt,mx);
    }
    cout<<mx;

    return 0;
}