#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

        
    }
    long long step(0);
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            step+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];

        }
        
    }
    cout<<step;
    
    return 0;
}