#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        
        for(int i=0;i<n;i++){
            cout<<"(";
        }
        for(int i=0;i<n;i++){
            cout<<")";
        }
        cout<<"\n";
    
        
        for(int j=1;j<n;j++){
            for(int i=0;i<j;i++){
                cout<<"()";
            }
            for (int i = 0; i <n-j; i++)
            {
                cout<<'(';
            }
            for (int i = 0; i <n-j; i++)
            {
                cout<<')';
            }
            cout<<endl;
        }
    

    }
}