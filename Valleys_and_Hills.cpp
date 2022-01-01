#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        bool hill = false, val = false;

        if (n > m)
        {
            val = true;
        }

        else
        {
            hill = true;
        }
       
        int k = min(n, m);
        if (n == m)
            k = k * 2 + 2;
        else
            k = k * 2;

        string s;
        while (k--)
        {

            if (hill == true)
            {
                s.push_back('1');
                val = true;
                hill = false;
               
            }
            else if (val == true)
            {
                s.push_back('0');
                val = false;
                hill = true;
              
            }
        }
        int cnt;
        hill = false;
        val = false;
        string ans;
        k = min(n, m);
        if (n > m)
        {
            cnt = n - k;
            ans = "010";d
        }                   
        else
        {
            cnt = m - k;
            ans = "101";
        }
        while (cnt--)
        {
            s.append(ans);
        }
        cout << s.length() << endl;
        cout << s << endl;
    }

    return 0;
}