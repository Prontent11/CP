#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    int n=s.length();
int cnt=1;
    int ans=1;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1])cnt=1;
       else cnt++;
        ans=max(cnt,ans);

    }

    cout<<ans;
}