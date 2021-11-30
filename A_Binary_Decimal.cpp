#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;cin>>t;int a,mx=0;
   while(t--){
       vector<int>arr;
       int n;cin>>n;
       while(n>0){
           a=n%10;
           n=n/10;

          arr.push_back(a);
       }
       cout<<*max_element(arr.begin(),arr.end())<<"\n";
   }
    return 0;
}