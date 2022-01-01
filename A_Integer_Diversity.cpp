#include<bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define int long long int
#define inf LLONG_MAX
#define mod 1e9+7
#define MOD 998244353;
#define vi vector<int>
#define vp vector<pair<int, int>>
#define vvi vector<vi>
using namespace std;
 
void pv(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << ", ";
    }cout << "\n";
}
// Power under mod (a ^ b) % mod
int modpow(int a, int b, int m = mod) {
    int ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
 
// Inverse Mod (1 / a) % mod
int modinv(int a, int m = mod) { return modpow(a, m - 2); }
 
// Modular Arithematic
int modadd(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
int modsub(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
int modmul(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
int moddiv(int a, int b, int m = mod) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 
vector<int> getvec(int n){vector<int> v(n);for(int i=0; i<n ;i++)cin>>v[i];return v;}
vector<bool>boolPrimeVec(1000001);vector<int> PrimeVec;void sieve(int n) {for (int i = 2; i <= n; i++)if (boolPrimeVec[i] == 0) {PrimeVec.push_back(i); for (int j = i*i; j <= n; j += i)boolPrimeVec[j] = 1;}}
 


        void solve() {
            int n;cin>>n;
            vector<int>a(n);
            map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];mp[a[i]]++;    
        }
        int ans=0;
        // auto it=mp;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->first!=0 and it->second >=2){
                ans+=2;
            }
            else ans++;
        }
        cout<<ans<<endl;
        

        }

        int32_t main() {
            ios_base::sync_with_stdio(0);
            cin.tie(0); cout.tie(0);
            int tc = 1;
            cin >> tc;
            for (int t = 1; t <= tc; t++) {
                // cout << "Case #" << t  << ": ";
                solve();
            }
        }