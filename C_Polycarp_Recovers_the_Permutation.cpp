        #include <bits/stdc++.h>

        using namespace std;

        #define ar array
        #define ll long long

        const int MAX_N = 1e5 + 1;
        const ll MOD = 1e9 + 7;
        const ll INF = 1e9;



        void solve() {
       int n;cin>>n;
       vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if(a[0]!=n and a[n-1]!=n){
            cout<<-1<<endl;
            return;
        }
        reverse(a.begin(),a.end());
        for(int &x:a){
            if(x!=n)cout<<x<<" ";
        }
        cout<<n<<"\n";
        

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