#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n);
        int check(0);
        int mx=INT_MIN;
        
        int mn=INT_MAX;
        int loc=0;
        int locmx=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]!=1 and arr[i]%2!=0){
                check++;
                loc=i;
                }
            if(mx<arr[i]){
                mx=arr[i];
                locmx=i;
            }
            mn=min(arr[i],mn);

        }
        int ans=0;
        if(check>1){
            arr[locmx]=1;
            for(int i=0;i<n;i++){
                ans+=arr[i]/1;
            }
            cout<<ans<<"\n";
        }
        else{
            arr[loc]=mn;
            for(int i=0;i<n;i++){
                ans+=arr[i]/mn;
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}