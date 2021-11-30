#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    
    
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        unordered_map<string,char>binary={
            {"0000",'a'},
            {"0001",'b'},
            {"0010",'c'},
            {"0011",'d'},
            {"0100",'e'},
            {"0101",'f'},
            {"0110",'g'},
            {"0111",'h'},
            {"1000",'i'},
            {"1001",'j'},
            {"1010",'k'},
            {"1011",'l'},
            {"1100",'m'},
            {"1101",'n'},
            {"1110",'o'},
            {"1111",'p'},
            
        };

        for(int i=0;i<n;i+=4){
            cout<<binary[s.substr(i,4)];
        }

        cout<<"\n";
    }
    
}