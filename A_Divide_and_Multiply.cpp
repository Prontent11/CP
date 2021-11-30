#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long>arr(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            while(arr[i]%2==0){
                arr[i]/=2;
                cnt++;
            }

        }
        sort(arr.begin(),arr.end(),greater<int>());
        while(cnt--){
            arr[0]*=2;
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        cout<<sum<<endl;


    }
}