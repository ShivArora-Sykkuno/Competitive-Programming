#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll num, p;
        cin >> num >> p;
        ll A = 0, B = 0, C = 0;

        if (p % 3 == 0)
        {
            A += (p / 3);
        }
        else if (p % 3 == 1)
        {
            A += (p / 3) + 1;
            B += 2;
        }
        else if (p % 3 == 2)
        {
            A += p / 3 + 1;
            B += 1;
        }

        if (A + B <= num)
        {
            cout << "YES" << endl;
            cout << A << " " << B << " " << num - A - B << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}