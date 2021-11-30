#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>arr={4,7,47,74,447,477,744,774,747,474,444,777};
    bool check=false;
    for(int i=0;i<arr.size();i++){
        if(n%arr[i]==0){
            check=true;
            break;
        }
    }
    if(check){
        cout<<"YES\n";
    }
    else cout<<"NO\n";

    return 0;
}