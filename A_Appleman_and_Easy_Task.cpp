#include<bits/stdc++.h>
using namespace  std;

int main(){
    int n;
    cin>>n;
    char arr[n][n];
    string s;
    for (int i = 0; i < n; i++)
    {   
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    bool even=true;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            
                if(arr[i+1][j]=='o' && i+1<n )cnt++;
                if(arr[i][j+1]=='o' && j+1<n)cnt++;
                if(arr[i-1][j]=='o' && i-1>1)cnt++;
             
             
                if(arr[i][j-1]=='o' && j-1>1)cnt++;
                if(cnt%2!=0)even=false;
            
        }
    }
    if(even)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}