#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,d;cin>>n>>d;
    vector<int>arr(n);
  int total(0);int tot=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        tot+=arr[i];
    }
    total=tot+((n-1)*10);
    int jokes=0;
    jokes+=(d-tot)/5;
    if(total>d)cout<<-1;
    
    else cout<<jokes;

    return 0;
}