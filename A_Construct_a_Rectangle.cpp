        #include <bits/stdc++.h>

        using namespace std;

        #define ar array
        #define ll long long

        const int MAX_N = 1e5 + 1;
        const ll MOD = 1e9 + 7;
        const ll INF = 1e9;



        void solve() {
                vector<int>a(3);
                for(int i=0;i<3;i++){
                    cin>>a[i];
                }
               sort(a.begin(),a.end());
                if(a[2]==a[0]+a[1])
                {
                    cout<<"YES\n";
                }               
                else if(a[2]==a[1] and a[0]%2==0){
                    cout<<"YES\n";
                    
                }
                else if(a[1]==a[0] and a[2]%2==0){
                    cout<<"YES\n";
                    
                }
                else cout<<"NO\n";


                
                
                
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