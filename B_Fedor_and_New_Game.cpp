#include<bits/stdc++.h>

using namespace std;
 

// Power under mod (a ^ b) % mod

 
// Inverse Mod (1 / a) % mod


        void solve() {
            int n,m,k;
            cin>>n>>m>>k;
            bitset<32>a[m+10];
            int ans=0,k_diff=0;
            for(int i=0;i<m+1;i++){
                int x;cin>>x;
                a[i]=x;
            }
            for(int i=0;i<m;i++){
                k_diff=0;
                for(int j=0;j<32;j++){
                    // cout<<a[m][j]<<"\n";
                    if(a[m][j]!=a[i][j]){
                            k_diff++;
                    }

                }
                if(k_diff<=k)ans++;
            }
        // cout<<ans<<endl;

        }

        int main() {
            ios_base::sync_with_stdio(0);
            cin.tie(0); cout.tie(0);
            int tc = 1;
            // cin >> tc;
            for (int t = 1; t <= tc; t++) {
                // cout << "Case #" << t  << ": ";
                solve();
            }
        }