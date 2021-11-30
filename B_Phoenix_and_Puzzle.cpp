#include<bits/stdc++.h>
using namespace std;
bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%2==0 and isSquare(n/2))cout<<"YES\n";
        else if(n%4==0 and isSquare(n/4))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;

}

#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
       
    }
    return 0;

}