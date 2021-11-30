#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int prev,current;
        vector<int>arr(n+1);

        for (int i = 0; i <n; i++)
        {
            arr[i]=i+1;

            
        }
        if(n%2==0){

        for(int i=1;i<n;i+=2){
            swap(arr[i-1],arr[i]);

        }
        }
        else{
          for(int i=1;i<n;i+=2){
            swap(arr[i-1],arr[i]);
            

        }  
        swap(arr[n-2],arr[n-1]);
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        
    }

    return 0;
}