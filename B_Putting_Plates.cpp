#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int arr[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
            arr[i][j]=0;
            }
        }
        for (int i = 0; i < a; i+=2)
        {
            arr[i][0]=1;
            arr[i][b-1] = 1;
        }
 
        for (int i = 2; i <= b-3; i+=2)
        {
            arr[0][i] = 1;
            arr[a-1][i] = 1;
        }
        
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
            cout<<arr[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}