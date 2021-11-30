#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    int n=s.length();
int cnt=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1])cnt=0;
        cnt++;
        ans=max(cnt,ans);

    }

    cout<<ans;
}