#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    map<string,string>t;
    for(int i=0;i<m;i++){
        string a,b;
        cin>>a;
        cin>>b;
        t[a]=b;
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        string s1=t[s];
        if(s1.length()<s.length()){
            cout<<s1<<" ";
        }
        else{
            cout<<s<<" ";
        }
    }
    

}