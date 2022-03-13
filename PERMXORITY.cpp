#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        if (n % 2 == 1)
        {
            int X = n;
            for (int i = 0; i < n; i++)
            {
                cout << X << " ";
                X--;
            }
            cout << endl;
            continue;
        }