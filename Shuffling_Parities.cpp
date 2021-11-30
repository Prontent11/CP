#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	  int n;cin>>n;
      vector<int>a(n+10);
      int e(0),e1(0),o(0),o1(0);
    for(int i=1;i<=n;i++){
      cin>>a[i];
      if(a[i]%2==0)e++;
      else o++;
    }
    for(int i=1;i<=n;i++){
      if(i%2==0)e1++;
      else o1++;
    }
    int a1=min(e,o1);





    int a2=min(e1,o);
    cout<<a1+a2<<endl;}
	return 0;
}


/*

if the no. is even usko odd banao
if the no. is odd  uskko odd hi rehne do 

ek array lo ek me odd push karo ek me even
ohk

*/