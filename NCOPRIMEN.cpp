#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size;
        cin >> size;

        vector<int> ARR(size + 2, 1);

        for (int i = 1; i <= size; i++)
        {
            cin >> ARR[i];
        }

        int i = 1, current = 1;

        while (i <= size)
        {
            if (current)
            {
                ARR[i] = ARR[i + 1] * 2;
                i += 2;
            }
            else
            {
                ARR[i] = ARR[i - 1] * 2;
                i++;
            }

            current = 1 - current;
        }

        for (int i = 1; i <= size; i++)
        {
            cout << ARR[i] << " ";
        }

        cout << endl;
    }
    return 0;
}