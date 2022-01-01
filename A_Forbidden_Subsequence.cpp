#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
    string s,t,s1;cin>>s>>t;
    // s1=s;
    string s2;
    
    int e=0;
    int cnt=0;
    int a_cnt=0,b_cnt=0,c_cnt=0;
    for(int i=0;i<s.length();i++){

        if(s[i]=='a')a_cnt++;
        if(s[i]=='b')b_cnt++;
        if(s[i]=='c')c_cnt++;
    }
    if(a_cnt==0 or b_cnt==0 or c_cnt==0){
        sort(s.begin(),s.end());
        cout<<s<<endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!='a' and s[i]!='b' and s[i]!='c' ){
            s1.push_back(s[i]);
        }
    }
    sort(s1.begin(),s1.end());
    
    if(t=="abc"){
        while(a_cnt--){
            s2.push_back('a');
        }
        while(c_cnt--){
            s2.push_back('c');
        }
        while(b_cnt--){
            s2.push_back('b');
        }
    }
    else if(t!="abc"){
         while(a_cnt--){
            s2.push_back('a');
        }
        while(b_cnt--){
            s2.push_back('b');
        }
        while(c_cnt--){
            s2.push_back('c');
        }
    }

    s2.append(s1);
    cout<<s2<<endl;
    
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