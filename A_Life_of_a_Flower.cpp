#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        int height=1;
        cin>>a[0];
       
        for(int i=1;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
             if(a[i]==1){
                 
                if(i>0 and a[i-1]==1){
                    height+=5;
                    
                }
                else{
                    height++;
                }
                
               
            }
             
           
           else if(a[i]==0){
               if(i>0 and a[i-1]==0){
                   height=-1;
                   break;
               }

               
            }
        }
        cout<<height<<endl;

    }
    return 0;
}