#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int temp = str.size();
        int count = 0, res = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != str[0] && str[i] != str[temp - 1])
                count += 1;
            else
                count = 0;
            res = max(res, count);
        }
        if (res == 0)
            cout << -1 << endl;
        else
            cout << res << endl;
    }
}