#include <bits/stdc++.h>
using namespace std;
#define ll long long int

signed main()
{
    ll t;
    cin >> t;
    ll res = 0;

    while (t--)
    {
        ll N;
        cin >> N;
        if (N % 2 == 0)
        {
            res = N / 2;
        }
        else
        {
            res = -(N + 1) / 2;
        }
        cout << res << endl;
    }
}
