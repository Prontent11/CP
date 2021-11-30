#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(2*n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        bool check=false;
        int sum=0;
        for (int i = 0; i < (2*n)-1; i++)
        {
           sum=arr[i]+arr[i+1];
           if(sum%2==0){
               check=true;
               break;
           }
           i++;
        }
        if(check){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
        
    }
    return 0;
}