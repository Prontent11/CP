#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b;
    cin>>a>>b;

    string s;
    cin>>s;
    while(b--){
    for(int i=0;i<s.length()-1;i++){
    if(s[i]=='B' and s[i+1]=='G'){
            s[i+1]='B';
            s[i]='G';
            i++;
    }
    }
    }
        cout<<s;
    return 0;
}