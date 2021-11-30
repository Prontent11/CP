#include<bits/stdc++.h>
using namespace  std;

int main(){
    int n,v,k,e;;
    cin>>n>>v;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>k;
        bool check=false;
        for(int j=0;j<k;j++){
            cin>>e;
            if(v>e)check=true;
        }
        if(check){
            arr.push_back(i);
        }
    }
    cout<<arr.size()<<"\n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]+1<<" ";
    }
    return 0;
}