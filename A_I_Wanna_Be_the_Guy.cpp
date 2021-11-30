#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    int a;cin>>a;
    int arr1[250];
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }
    int b;
    cin>>b;
    
    for(int i=a;i<a+b;i++){
        cin>>arr1[i];
    }
    
    sort(arr1,arr1+(a+b));
    int count=0;
    for(int i=0;i<a+b;i++){
      if(arr1[i]!=arr1[i+1]){
          count++;
      }
    }
    
    if(n==count){
    cout<<"I become the guy.";
    }
    else {

        cout<<"Oh, my keyboard!";
    }
}