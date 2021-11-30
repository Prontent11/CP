#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> ans(n);
        int mp[1000];
        int cnt(0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
             if (mp[arr[i]] <= 1)
            {
                // ans.push_back(cnt);
                cout<<cnt<<" ";
                // cout<<mp[arr[i]]<<endl;
            }
            else 
            {
                cnt++;
                // ans.push_back(cnt);
                cout<<cnt<<" ";
            }
                // cout<<mp[arr[i]]<<" ";
        }
       
//         for(int i=0;i<n;i++){
//             cout << ans[i] << " ";
//    }
   cout<<endl;
   
    }
    return 0;
}