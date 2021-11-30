#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6][6];
    int ans[6][6];
    for(int i=1;i<=3;i++)
    {
        for (int j = 1; j <=3; j++)
        {
            cin>>arr[i][j];
            ans[i][j]=arr[i][j];
        }
        
    }
    for(int i=1;i<=3;i++)
    {
        for (int j = 1; j <=3; j++)
        {
            if(arr[i][j]!=0){
                ans[i+1][j]+=arr[i][j];
                ans[i-1][j]+=arr[i][j];
                ans[i][j-1]+=arr[i][j];
                ans[i][j+1]+=arr[i][j];
            }
        }
        
    }

    for(int i=1;i<=3;i++)
    {
        for (int j = 1; j <=3; j++)
        {
            if(ans[i][j]%2) cout<<"0";
            else cout<<"1";            
        }
        cout<<"\n";
    }
     
    return 0;
}