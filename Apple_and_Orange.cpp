#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    vector<int>ap(m);
    vector<int>mg(n);
    for (int i = 0; i < m; i++)
    {
        cin>>ap[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>mg[i];
    }
    int apple(0),orange(0);
    for(int i=0;i<m;i++){
        if((ap[i]+a)>=s and (ap[i]+a)<=t){
            apple++;
        }
        
    }
    for(int i=0;i<n;i++){
        if((b+mg[i])>=s and (b+mg[i])<=t){
            orange++;
        }

    }
    cout<<apple<<endl;
    cout<<orange<<endl;
    return 0;
}