        #include <bits/stdc++.h>

        using namespace std;

        #define ar array
        #define ll long long

        const int MAX_N = 1e5 + 1;
        const ll MOD = 1e9 + 7;
        const ll INF = 1e9;



        void solve() {
        int n,m,ra,rb,ca,cb;
        cin>>n>>m>>rb>>cb>>ra>>ca;
        int dr=1,dc=1;
        int t=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                 if(ra==rb or ca==cb){
                     cout<<t<<endl;
                     return;
                   
                }
                 
                if(rb==n)dr=-1;
                rb+=dr;
                if(cb==m)dc=-1;
                cb+=dc;
                t++;
               
                
               


            }
        }
        cout<<t<<endl;


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