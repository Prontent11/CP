#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	long long int k,p,n;
    cin>>n>>p>>k;
	if(n-1<k){
		cout<<p<<endl;
	}
    else if(n-1==k){
        
        if(p<=1){cout<<p<<endl;}
        else if(p%k==1){
            cout<<3<<endl;
        }
        else if(p>1 and p%k!=1){
            cout<<p+1<<endl;
        }
    }
	else 
	{int a=p%k;
	a=a*(n/k);

	if(p<k)
	{
		cout<<a+1<<endl;
	}
	else{

	cout<<(a+1)+p/k<<endl;
	// cout<<<<endl;

	}
	
	}


   
	}
	return 0;
}
