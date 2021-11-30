#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int l,a,b,cnt(1);
        cin>>l>>a>>b;
        string s;cin>>s;
        int ans=a*l;
        if( b<=0) {
            for (int i = 0; i < l-1; i++)
            {
                if(s[i]!=s[i+1])cnt++;
            }
            ans+=b*((cnt/2)+1);
            
        }
        else{
            ans+=b*l;
        }
        cout<<ans<<'\n';
    }
   
    return 0;
}
