        #include <bits/stdc++.h>

        using namespace std;

        #define ar array
        #define ll long long

        const int MAX_N = 1e5 + 1;
        const ll MOD = 1e9 + 7;
        const ll INF = 1e9;



        void solve() {
        int n;cin>>n;
        vector<pair<int,int>>vp(n);
        for (int i = 0; i < n; i++)
        {
         int x;cin>>x;
         vp[i].first=x,vp[i].second=i;   
        }
        sort(vp.rbegin(),vp.rend());
        vector<ll>ans(n);
        ll mid=(n+2)/2;
        ll res=0;
        ll left=mid-1,right=mid+1;
        bool isLeft=true;
        for (int i = 0; i < n; i++)
        {
            int idx=vp[i].second;
            int cnt=vp[i].first;
            if(isLeft){
                ans[idx]=left;
                ll cost =2*(mid-left);
                res+=(cost*cnt);
                left--;
                isLeft=false;
            }
            else{
                ans[idx]=right;
                ll cost =2*(right-mid);
                res+=(cost*cnt);
                right++;
                isLeft=true;
            }
        }
        cout<<res<<endl;
        cout<<mid<<" ";
        for(ll x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        
    

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