#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n,t;
    cin>>n>>t;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
   long long ans=1;
   int positive(0),negative(0),zero(0);
    while(t--){
        cin>>q;
        for(int i=0;i<n;i++){
            if(arr[i]<q)positive++;
           else if(arr[i]>q)negative++;
           else zero++;
        }
            if(zero)cout<<"0\n";
           else if(negative%2==0 and zero==0){
               cout<<"POSITIVE\n";
           }
           else if(negative%2!=0 and zero==0) cout<<"NEGATIVE\n";
           
    }
    return 0;
}