#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n > 0)
    {
        cout << n;
    }
    else
    {
        // int k=n;
        n=n*(-1);
        long long a = n % 10;
        long long b = n % 100 / 10;
        long long mx = max(a, b);
        if (a >= b)
        {
            cout << (n / 10)*-1;
            
        }
        else if (a < b)
        {
            n /= 100;
            n *= 10;
            n += a;
            cout << n*-1;
        }
    }
}