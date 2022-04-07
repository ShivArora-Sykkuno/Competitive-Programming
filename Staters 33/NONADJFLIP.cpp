#include <bits/stdc++.h>
using namespace std;
#define ll long long int

signed main()
{
    int Test;
    cin >> Test;
    while (Test--)
    {
        int Num;
        cin >> Num;
        string arr;
        cin >> arr;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < Num; i++)
        {
            if (arr[i] == '1')
            {
                sum2++;
                if (arr[i] == arr[i + 1])
                {
                    sum1++;
                }
            }
        }
        if (sum2 == 0)
            cout << 0 << endl;
        else
        {
            if (sum1 == 0)
                cout << 1 << endl;
            else
            {
                cout << 2 << endl;
            }
        }
    }
}