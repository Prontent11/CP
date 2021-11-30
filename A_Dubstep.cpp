#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    string s;cin>>s;
    int n=s.length();
    bool check=false;
    string ans;
    for(int i=0;i<n;){
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
            i+=3;
           
           if(check)ans+=" ";
            check=false;
            
        }
        else{
            check=true;
            ans+=s[i];
            i++;
        }
        
    }
    cout<<ans;
    return 0;
} 