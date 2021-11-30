#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k,fi,ti;
    cin>>n>>k;
    int ans=INT_MIN,dif;
    for (int i = 0; i < n; i++)
    {
        cin>>fi>>ti;
        if(ti>k)dif=fi-(ti-k);
        else dif=fi;
        ans=max(dif,ans);
    }
    cout<<ans;
    
    return 0;
}