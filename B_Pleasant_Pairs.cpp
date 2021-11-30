#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt(0);
        for(int i=0;i<n-1;i++){
            int j=i+1;
            if(arr[i]*arr[i+1]==i+j){
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}