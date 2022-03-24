#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll M = 998244353;
    ll t;
    cin >> t;
    while (t--)
    {
        ll num;
        cin >> num;
        string str;
        cin >> str;

        ll arr[num] = {0};

        if (str[0] == '1')
        {
            arr[0] = 1;
        }

        ll prev = arr[0];

        for (ll i = 1; i < num; i++)
        {
            if (str[i] == '1')
            {
                prev += (i + 1);
            }
            arr[i] = prev;
            arr[i] = arr[i] % 2;
        }

        ll x = 1;
        ll res = 0;
        for (ll i = num - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                res += x;
                res = res % M;
            }
            x = x * 2;
            x = x % M;
        }
        cout << res % M << "\n";
    }
}