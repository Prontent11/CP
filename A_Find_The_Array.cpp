#include<bits/stdc++.h>
using namespace std;


int main(){
     
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n);
        int tot=1;
        if(n==1)cout<<1<<"\n";
        else{
            arr.push_back(1);
            int cnt=1;
            int i=1;
            while(true)
            {
                i+=2;
                tot+=i;
                cnt++;
                if(tot>=n)break;
                
            }
            
            cout<<cnt<<"\n";
        }
        
       
    }
    return 0;
}