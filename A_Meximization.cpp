#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr;
        vector<int>duplicate;
        unordered_map<int,int>mp;
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            if(mp[a]==1){
                duplicate.push_back(a);
            }
            else{
                arr.push_back(a);
                mp[a]++;
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<duplicate.size();i++){
            cout<<duplicate[i]<<' ';
        }
        
        cout<<"\n";
    }
    return 0;
}