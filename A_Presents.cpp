#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>a(n+1);
    vector<int>ans(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        ans[a[i]]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return 0;
}