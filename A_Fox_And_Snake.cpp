#include<bits/stdc++.h>
using namespace std;


int main(){
int n,m;cin>>n>>m;
bool last=false;
for(int i=1;i<=n;i++){
    if(i%2!=0){

    for (int j = 1; j <= m; j++)
    {
        cout<<"#";
    }
    }
    else if(i%2==0){
    if(last==false) last=true;
    else if(last==true) last=false;
    for (int j = 1; j <= m; j++)
    {
         if(j==1 and last==false ){
            cout<<"#";
           
        }
        else if(j==m and last==true )
        {
            cout<<"#";
            
        }
        
        else cout<<".";
    }
    }
    cout<<"\n";
    
} 
    return 0;
}