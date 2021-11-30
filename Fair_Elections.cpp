#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        vector<int>A(a);
        vector<int>B(b);
        int suma=0,sumb=0;
        for(int i=0;i<a;i++){
            cin>>A[i];
            suma+=A[i];
        }        
        for(int i=0;i<b;i++){
            cin>>B[i];
            sumb+=B[i];
        }    


          
            int cnt=0;
        while(suma<=sumb){
            int loca(0),locb(0);
              int mi=INT_MAX;
            int mx=INT_MIN;
            for(int i=0;i<a;i++){
                if(A[i]<mi){
                    mi=A[i];
                    loca=i;
                }
            }
            for(int i=0;i<b;i++){
                if(B[i]>mx){
                    mx=B[i];
                    locb=i;
                }
            }
            if(mx<=mi){
                cnt=-1;
                break;
            }
            swap(A[loca],B[locb]);
            suma-=mi;
            suma+=mx;
            sumb-=mx;
            sumb+=mi;
            cnt++;
        }    
        cout<<cnt<<"\n";
    }
}