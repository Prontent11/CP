#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    if(n<=3)cout<<"NO SOULUTION";
    else{
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                cout<<i+3<<" ";
                cout<<i+1<<" ";
                
            }
        }
    }
    return 0;
}