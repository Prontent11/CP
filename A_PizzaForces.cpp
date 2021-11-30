#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
   
        long long int n;cin>>n;
        if(n%2!=0)n++;
        long long int ans=2.5*n;   //got the answer after making the no. even as we are dividing it by 5/2 so if the no. is multiple of 2 so we wiil easily divide it 
        // cout<<ans<<" ";

        // n*5/2;
        // if n is even then it will get easiily divivded by 2;
        // that's why we are dividing it

        
        if(ans<=15){
            ans=15;
        cout<<ans<<"\n";
        }
    //    else if(ans%5!=0){
    //         ans=ans/5;
    //         ans=(ans+1)*5;
    //     cout<<ans<<"\n";
    //     }
        else cout<<ans<<"\n";
        
        
    }
}