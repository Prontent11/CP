#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int A,B,C,D,E;
	    cin>>A>>B>>C>>D>>E;
	    int sum;
        if(A+B<=D and C<=E) cout<<"YES\n";
        else if(A+C<=D and B<=E) cout<<"YES\n";
        else if(B+C<=D and A<=E) cout<<"YES\n";
        else cout<<"NO\n";
	}
	return 0;
}
