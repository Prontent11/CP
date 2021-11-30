#include<iostream>
using namespace std;

int main()
{
    int acnt(0),bcnt(0),ccnt(0);
    int a,b,c;

    int n;cin>>n;
    while (n--)
    {
        cin>>a>>b>>c;
        acnt+=a;
        bcnt+=b;
        ccnt+=c;

    }

    if(acnt==0 and bcnt==0 and ccnt==0) cout<<"YES";
    else cout<<"NO";
    
    
    return 0;
}