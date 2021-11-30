#include <bits/stdc++.h>

using namespace std;

int main(){
   string s;
   getline(cin,s);
   int n=s.length();
   int cnt=0;
   sort(s.begin(),s.end());
   for(int i=0;i<n-1;i++){
       if(s[i]>=97 and s[i]<=122){
           cnt++;
           if(s[i]==s[i+1]){
               cnt--;
           }
       }
   }
   cout<<cnt;
    return 0;
}