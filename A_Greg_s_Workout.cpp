#include<bits/stdc++.h>
using namespace std;


int main(){
   
        int n;
        cin>>n;
        int c,bi,ba;
        int cs(0),bis(0),bas(0);
        bool cc=true,bic=false,bac=false;
        for(int i=0;i<n;i++){
            if(cc){
                cin>>cc;
                cs+=cc;
                cc=false;
                bic=true;
            }
            else if(bic){
                cin>>bic;
                bis+=bic;
                bic=false;
                bac=true;
            }
            else if(bac){
                cin>>bac;
                bas+=bac;
                bac=false;
                cc=true;
            }

        }
        if(cc>bac and cc>bic){
            cout<<"chest";
        }
        else if(bic>cc and bic>bac){
            cout<<"biceps";
        }
        else{
            cout<<"back";
        }
    }
