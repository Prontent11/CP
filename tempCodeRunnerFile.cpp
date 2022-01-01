#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        // int hil=1,val=0;
        bool hill=false,val=false;
        if(n>m){
            val=true;
            
        }
        else{
            hill=true;
            
        }
       int k=min(n,m);
       int hi=0,va=0;
    string s;
        while(true){
           
           if(hi==n and va==m){
               break;
           }
            if(hill and hi<n){
               s.push_back('0'); 
               val=true;
               hill=false;
               hi++;
               
            }
            else if(val and va<m){
                s.push_back('1');
                val=false;
                hill =true;
                va++;
              
            }
            
           

        }
        cout<<s.length()<<endl;
        cout<<s<<endl;
    }
    
    return 0;
}