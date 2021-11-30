#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=1)cout<<-1<<"\n";
        else{
            cout<<29;
            if(n>2){
                for(int i=2;i<n;i++){
                    cout<<9;
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}