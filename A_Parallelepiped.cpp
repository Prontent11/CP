#include<bits/stdc++.h>
using namespace std;


int main(){
    int l,m,n;
    cin>>l>>m>>n;
    int a=sqrt((l*m)/n);
    int b=sqrt((l*n)/m);
    int c=sqrt((n*m)/l);


    int ans=4*(a+b+c);
    cout<<ans;
    return 0;
}