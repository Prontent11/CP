#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int cnt=0;
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b.push_back(a[i]);
         
        }
        sort(b.begin(),b.end());
     
         int i=0,j=0;
     while(true){
         if(a[i]==b[j]){
             if(j>=1){

             cnt+=j-2;
             }
                j=0;
                i++;
         }
         else if(a[i]!=b[j]){
             j++;
         }
         if(i==j){
             break;
         }
     }



        // cout<<cnt<<" ";
      int c=n*(n-1)/2;
      if(cnt<c)cout<<"YES\n";
      else cout<<"NO\n";
        
    }
}




