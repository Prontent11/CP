        #include <bits/stdc++.h>

        using namespace std;

        #define ar array
        #define ll long long

        const int MAX_N = 1e5 + 1;
        const ll MOD = 1e9 + 7;
        const ll INF = 1e9;

        ll area(ll h){
            ll k;cin>>k;
            vector<ll>point(k);
            for (int i = 0; i < k; i++)
            {
                cin>>point[i];
            }
            ll ans=point.back()-point.front();
            ans=ans*h;
            return ans;
            
        }

        void solve() {
        ll w,h;
        cin>>w>>h;
        ll ans=area(h);
         ans=max(ans,area(h));
         ans=max(ans,area(w));
         ans=max(ans,area(w));
        cout<<ans<<endl;
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