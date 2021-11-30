#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    vector<bool>row(n);
    vector<bool>col(m);
    fill(row.begin(), row.end(), false);
    fill(col.begin(), col.end(), false);
    string s;
    for(int i=0;i<n;i++){
            cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='S'){
                row[i]=true;
                col[j]=true;
            }
        }
    }
    int cnt(0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(row[i]==false || col[j]==false){
              cnt++;
          }
        }
    }
    cout<<cnt;
}