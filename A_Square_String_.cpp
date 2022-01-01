
    #include <bits/stdc++.h>

    using namespace std;

    #define ar array
    #define ll long long

    const int MAX_N = 1e5 + 1;
    const ll MOD = 1e9 + 7;
    const ll INF = 1e9;



    void solve() {
    string s;
    cin>>s;
    int n=s.length();
    if(n==1 or n%2!=0){
        cout<<"NO\n";
    }
    else{
     int j=0;
    
         for (int i = 1; i < n; i++)
         {
             if(s[0]==s[i]){
                 j=i;
                 break;

             }
         }
         int k=j;
         
         
         int l=0;
         if(j-l==1){
             k=n;
         }
        while(l<k){
            
            if(s[l]!=s[j]){
              cout<<"NO\n";
               return;
            }
            l++;
            j++;
           
        }
        //  cout<<l<<j<<endl;
        cout<<"YES\n";

         
     
    }

    }

    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int tc = 1;
        cin >> tc;
        for (int t = 1; t <= tc; t++) {
            // cout << "Case #" << t  << ": ";
            solve();
        }
    }