        #include <bits/stdc++.h>

        using namespace std;

        #define ar array
        #define ll long long

        const int MAX_N = 1e5 + 1;
        const ll MOD = 1e9 + 7;
        const ll INF = 1e9;



        void solve() {
            int n;cin>>n;
            vector<int>arr(n);
            map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
    vector<vector<int>>pp;
        bool trigger =false;
        while(true){
        for(int i=0;i<n;i++){
            arr[i]=mp[arr[i]];
        }
        pp.push_back(arr);
        int curr=0,prev=0;
        mp.clear();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
         for(int i=0;i<n;i++){
             if(pp[prev][i]!=pp[curr][i]){
                 trigger=true;
             }
         }
         if(trigger=false){
             break;
         }

        }
        // int ;cin>>q;
        // while(q--){
        //     int x,y;
        //     cin>>x>>y;
        //     while(y--){
        //         for(int i=0;i<n;i++){

        //         }
        //     }
        // }
        for(int i=0;i<pp.size();i++){
            for(int j=0;pp[i].size();j++){
                cout<<pp[i][j]<<" ";
            }
            cout<<endl;
        }


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