#include<bits/stdc++.h>
using namespace std;


int main(){
int n,k;
cin>>n>>k;
vector<int>arr(n);
int cnt=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if((arr[i]+k)<=5){
        cnt++;
    }
}
cout<<cnt/3;

    return 0;
}