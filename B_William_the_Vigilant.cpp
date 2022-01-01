#include<bits/stdc++.h>
using namespace std;

int main(){
   int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
        if (s[i] == 'b' && s[i - 1] == 'a' && s[i + 1] == 'c')
            cnt++;
    
    while (q--)
    {
        int p;
        char c;
        cin >> p >> c;
        p--;
        int st = max(0, p - 2);
        int ed = min(n - 1, p + 2);
        
/*
abcabcabc
bbcabcabc
bccabcabc
bcaabcabc
bcabbcabc

*/
        for (int i = st + 1; i < ed; i++)
            if (s[i] == 'b' && s[i - 1] == 'a' && s[i + 1] == 'c')
                cnt--;
        
        s[p] = c;
 
        for (int i = st + 1; i < ed; i++)
            if (s[i] == 'b' && s[i - 1] == 'a' && s[i + 1] == 'c')
                cnt++;
 
        cout<<cnt<<endl;
    }
}

