#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin>>n>>c;
    vector<int>a(n);
    int loc1,loc2;
    int mx=0;
    int diff;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        
        
        
    }
    for (int i = 0; i < n-1; i++)
    {
        diff=a[i]-a[i+1];
        if(diff<0){diff=0;}
       mx=max(diff,mx);
    }
    int ans=mx-c;
    if(ans<0)cout<<0;
    else cout<<ans;
}