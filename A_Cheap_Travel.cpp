#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    int ans1=0;
    cin>>n>>m>>a>>b;
    
        ans1=(n/m)*b;
        ans1=ans1+min((n%m)*a,b);
    
   
    int ans2=(n*a);
    int final=min(ans1,ans2);
    cout<<final;
    return 0;
}