#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>arr;
    int a,b;
    for(int i=0;i<n;i++){
       cin>>a>>b;
        arr.push_back(make_pair(a,b) );
        
    }
    sort(arr.begin(),arr.end());
    bool check=false;
    for(int i=0;i<n;i++){
        if(s>arr[i].first){
            s=s+arr[i].second;
        }
        else{
            check=true;

        }
       
    }
    if(check){
        cout<<"NO\n";
    }
    else {

    cout<<"YES\n";
    }
    return 0;
}