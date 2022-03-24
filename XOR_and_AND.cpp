#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int

ll largest_power(ll N)
{
    N = N | (N >> 1);
    N = N | (N >> 2);
    N = N | (N >> 4);
    N = N | (N >> 8);
    N = N | (N >> 16);

    return (N + 1) >> 1;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll N;
        cin >> N;
        ll arr[N];
        int i = 0;
        for (; i < N;)
        {
            cin >> arr[i];
            i++;
        }
        ll bits[35] = {0};
        i = 0;
        for (; i < N;)
        {
            ll PO = largest_power(arr[i]);
            ll Val = log(PO) / log(2);
            __gcd(2, 3);
            bits[Val]++;
            i++;
        }

        unordered_map<ll, ll> map;
        for (int xx = 0; xx <= 1e3; xx++)
        {
            map[xx]++;
        }

        ll res = 0;
        i = 0;
        for (; i < 35;)
        {
            res += (bits[i] * (bits[i] - 1)) / 2;
            i++;
        }
        cout << res << endl;
    }
    return 0;
}