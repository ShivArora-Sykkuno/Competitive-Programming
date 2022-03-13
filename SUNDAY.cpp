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
        int count = 0;
        for (int i = 1; i < 31; i++)
        {
            if (i % 7 == 0 || i % 7 == 6)
                count--;
        }
        for (int i = 0; i < n; i++)
        {
            int X;
            cin >> X;
            if (X % 7 != 0 && X % 7 != 6)
                count--;
        }
        cout << -count << endl;
    }
}