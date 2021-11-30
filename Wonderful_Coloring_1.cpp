#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while(t--){
    string s;
    cin>>s;
    int red=0;
    sort(s.begin(),s.end());
    auto res=unique(s.begin(), s.end());
    string s1=string(s.begin(), res);
for(int i=0;i<s1.length();i++){
    
    
}cout<<s1<<"\n";
    cout<<red<<"\n";
}
       return 0;
}