#include<bits/stdc++.h>
using namespace std;

// 1+2*3=7
// 1*(2+3)=5
// 1*2*3=6
// (1+2)*3=9


int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans1=a+b*c;
    int ans2=a*(b+c);
    int ans3=a*b*c;
    int ans4=(a+b)*c;
    int ans5=a+b+c;
    int final=INT_MIN;
    final=max(ans1,final);
    final=max(final,ans2);
    final=max(final,ans3);
    final=max(final,ans4);
    final=max(final,ans5);

    cout<<final;

}