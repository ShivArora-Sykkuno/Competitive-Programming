#include <bits/stdc++.h>
using namespace std;
#define ll long long int

signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll N;
        cin >> N;
        ll Pow = 1;
        ll temp = N;
        while (Pow <= temp)
        {
            N--;
            Pow *= 2;
        }

        cout << N << endl;
    }
}
