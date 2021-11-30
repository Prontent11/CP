#include<bits/stdc++.h>
using namespace std;


int main(){
int n;cin>>n;
vector<int>arr(n);
int odd(0),even(0);
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==0){
        even++;

    }
    else odd++;
}
if(even>odd){
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout<<i+1;
        }
    }
}
else if(even<odd){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<i+1;
        }
    }
}

    return 0;
}