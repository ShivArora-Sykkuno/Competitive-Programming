#include <bits/stdc++.h>
using namespace std;
#define ll long long int

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll N;
        cin >> N;
        string str;
        cin >> str;
        ll One = 0;
        ll Zero = 0;
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == '1')
                One++;
            if (str[i] == '0')
                Zero++;
        }

        ll count = 0;
        ll maxx = max(One, Zero);
        ll minn = min(One, Zero);
        while (maxx && minn)
        {
            if (count % 2 == 0)
                maxx--;
            else
            {
                minn--;
            }
            count++;
        }

        if (maxx || minn)
            cout << count + 1 << endl;
        else
            cout << count << endl;
    }
}
