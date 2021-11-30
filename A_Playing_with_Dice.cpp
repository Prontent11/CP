#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b;
    cin>>a>>b;
    int a_cnt(0),b_cnt(0),draw(0);
    for(int i=1;i<=6;i++){
        int x=abs(a-i);
        int y=abs(b-i);
        if(x>y){
            a_cnt++;
        }
        else if(y>x)b_cnt++;
        else if(x==y)draw++;
    }
    cout<<b_cnt<<" "<<draw<<" "<<a_cnt;

}