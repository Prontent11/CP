#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a=4*n;
        while(n--){
            cout<<a<<" ";
            a-=2;
        }
        cout<<"\n";}
    return 0;
}