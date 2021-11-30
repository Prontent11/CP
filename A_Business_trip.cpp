#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[13];
   int n;cin>>n;
   for(int i=0;i<12;i++){
      cin>>arr[i];
   }
   sort(arr,arr+12);
   int sum=0;
   int cnt=0;
   for(int i=11;i>=0;i--){
       if(sum>=n)break;
       sum+=arr[i];
       cnt++;
       

   }
   if(sum>=n)cout<<cnt;
   else cout<<-1;
   
    return 0;
}